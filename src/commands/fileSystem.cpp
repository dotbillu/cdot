#include "fileSystem.h"

namespace fs = std::filesystem;

void ls(std::vector<std::string>) {
  int count = 1;
  std::cout << " ";
  for (const auto &entry : fs::directory_iterator(fs::current_path())) {

    std::string file = entry.path().filename();
    if (entry.is_directory())
      file.insert(0, "");

    if (count % 5 == 0) {
      std::cout << '\n';
      std::cout << " ";
    }

    std::cout << file << "   ";
    count++;
  }
  std::cout << "\n";
}
void cat(std::vector<std::string> &input) {
  if (input.size() < 2)
    return;
  std::ifstream file(input[1]);

  if (!file.is_open()) {
    std::cerr << "Could not open file\n";
    return;
  }

  std::string line;

  while (std::getline(file, line)) {
    std::cout << std::setw(2) << line << '\n';
  }
}
void pwd(std::vector<std::string>) {
  const std::string path = fs::current_path();
  std::cout << std::setw(2) << path << "\n";
}
void cd(std::vector<std::string> &input) {
  if (input.size() < 2)
    return;
  fs::current_path(input[1]);
}

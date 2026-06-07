#include "execute.h"
#include "inputParser.h"
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;
int main() {
  while (true) {
    std::string input;
    const std::string path = fs::current_path();
    std::cout <<" "<<path << "\n" << "~❯";
    std::getline(std::cin, input);
    std::vector<std::string> parsedInput = parser(input);
    execute(parsedInput);
  }
}

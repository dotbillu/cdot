#include "shell.h"

void clear(std::vector<std::string>) { std::cout << "\033[H\033[2J"; }

// void openNvim(std::vector<std::string> &input) {
//   std::string file = input.size() > 1 ? input[1] : "";
//   std::string cmd = "nvim " + file;
//   std::system(cmd.c_str());
// }

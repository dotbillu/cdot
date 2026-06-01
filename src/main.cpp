#include "inputParser.h"
#include <iostream>
#include <string>
#include <vector>

int main() {
  while (true) {
    std::string input;
    std::cout << "~>";
    std::getline(std::cin, input);
    std::vector<std::string> parsedInput = parser(input);
    std::cout << "Output :" << parsedInput[0] << '\n';
  }
}

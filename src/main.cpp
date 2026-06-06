#include "execute.h"
#include "inputParser.h"
#include <iostream>
int main() {
  while (true) {
    std::string input;
    std::cout << "~>";
    std::getline(std::cin, input);
    std::vector<std::string> parsedInput = parser(input);
    execute(parsedInput);
  }
}

#include "inputParser.h"

std::vector<std::string> parser(std::string s) {
  std::stringstream ss(s);
  std::vector<std::string> inputParsed;
  std::string word;

  while (ss >> word) {
    inputParsed.push_back(word);
  }
  return inputParsed;
}

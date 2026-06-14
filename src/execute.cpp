#include "execute.h"
#include "registry.h"
#include <string>
#include <vector>

void execute(std::vector<std::string> input) {
  if (input.size()) {
    commands[input[0]](input);
  }
}

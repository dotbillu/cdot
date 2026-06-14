#include "commands/runExternal.h"
#include "execute.h"
#include "registry.h"

void execute(std::vector<std::string> input) {
  if (input.size()) {
    if (commands.count(input[0])) {
      commands[input[0]](input);
    } else {
      runExternal(input);
    }
  }
}

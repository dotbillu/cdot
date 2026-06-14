#include "commands/fileSystem.h"
#include "commands/shell.h"
#include "registry.h"
#include <functional>
#include <string>
#include <unordered_map>

using Command = std::function<void(std::vector<std::string> &)>;
std::unordered_map<std::string, Command> commands = {
    {"ls", ls}, {"pwd", pwd}, {"cat", cat}, {"cd", cd}, {"clear", clear}
    // {"nvim", openNvim},
};

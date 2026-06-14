#pragma once

#include <functional>
#include <string>
#include <unordered_map>
#include <vector>

using Command = std::function<void(std::vector<std::string> &)>;

extern std::unordered_map<std::string, Command> commands;

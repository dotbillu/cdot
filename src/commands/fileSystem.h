#pragma once
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

void ls(std::vector<std::string>);
void cat(std::vector<std::string> &input);
void pwd(std::vector<std::string>);
void cd(std::vector<std::string> &input);

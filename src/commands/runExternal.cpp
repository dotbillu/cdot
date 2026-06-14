#include "runExternal.h"

void runExternal(std::vector<std::string> &input) {
  pid_t pid = fork();

  if (pid == 0) {
    std::vector<char *> args;

    for (auto &s : input)
      args.push_back(s.data());

    args.push_back(nullptr);

    execvp(args[0], args.data());

    perror("execvp");
    exit(1);
  }

  waitpid(pid, nullptr, 0);
}

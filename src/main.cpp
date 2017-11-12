#include <iostream>

#include "url_getter.hpp"

int main(int argc, char **argv) {
  UrlGetter url_getter;
  std::vector<std::string> dirs;
  dirs.push_back(std::string("../to_get"));
  auto result = url_getter.GetConfigurationFiles(dirs);
  for (std::string s : result) {
    std::cout << s << "\n";
  }
  return 0;
}

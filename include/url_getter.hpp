#ifndef FILES_GETTER_HPP
#define FILES_GETTER_HPP

#include <string>
#include <vector>

class UrlGetter {
 private:
  std::vector<std::string> GetConfigurationFilesFromDirectory(
      const std::string directory);

 public:
  std::vector<std::string> GetConfigurationFiles(
      const std::vector<std::string> directories);
};

#endif

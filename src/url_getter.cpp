#include <dirent.h>
#include <stdexcept>
#include <string>
#include <vector>

#include "url_getter.hpp"

std::vector<std::string> UrlGetter::GetConfigurationFiles(
    const std::vector<std::string> directories) {
  // std::string url_files_extension(".json");
  std::vector<std::string> configuration_files;
  for (std::string s : directories) {
    std::vector<std::string> files_batch =
        GetConfigurationFilesFromDirectory(s);
    configuration_files.insert(
        configuration_files.begin(), files_batch.begin(), files_batch.end());
  }
  return configuration_files;
}

std::vector<std::string> UrlGetter::GetConfigurationFilesFromDirectory(
    const std::string directory) {
  DIR *hdir = opendir(directory.c_str());
  if (!hdir) {
    throw std::invalid_argument(std::string("Could not open \"") + directory +
        std::string("\" as a directory"));
  }
  struct dirent *dir_entry;
  std::vector<std::string> results;
  while ((dir_entry = readdir(hdir)) != NULL) {
    std::string file_name(dir_entry->d_name);
    results.push_back(file_name);
  }
  return results;
}

#include "types.hpp"

#include "config.hpp"

std::string version()
{
  std::stringstream stream;
  stream << application::PROJECT_VERSION_MAJOR;
  stream << "." << application::PROJECT_VERSION_MINOR;
  stream << "." << application::PROJECT_VERSION_PATCH;
  stream << "-" << application::PROJECT_COMMIT_ID;

  return stream.str();
}

std::string info()
{
  std::stringstream stream;
  stream << application::PROJECT_NAME;
  stream << " - " << application::PROJECT_DESCRIPTION;
  stream << " " << version();

  return stream.str();
}

int main(int argc, char **argv)
{
  std::clog << info() << std::endl;

  return EXIT_SUCCESS;
}

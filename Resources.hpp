#include <string>
#include <vector>

namespace
{
#define UNIX_LINUX_BUILD 1

constexpr std::string_view converter_version_number{"0.0.0.1"};
const std::vector<std::string> possible_input_paramters = {"Help",
                                                           "Version",
                                                           "DecToHex",
                                                           "HexToDec",
                                                           "DecToOctal",
                                                           "OctalToDec",
                                                           "Exit"};
} // namespace
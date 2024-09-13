#include <cstdint>
#include <string>

std::string DecToHex(std::uint32_t dec_input_parameter);
std::string HexToDec(const std::uint32_t hex_input_parameter);
std::string DecToOctal(const std::uint32_t dec_input_parameter);
std::string OctalToDec(const std::uint32_t octal_input_parameter);
void printVersion();
void clearCMD();
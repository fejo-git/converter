#include "Converter.hpp"
#include "Resources.hpp"
#include <iostream>
#include <sstream>

std::string DecToHex(const std::uint32_t dec_input_parameter)
{
    std::stringstream convert_dec_to_hex_stringstream{};

    convert_dec_to_hex_stringstream << std::hex << std::uppercase
                                    << dec_input_parameter;
    return convert_dec_to_hex_stringstream.str();
}

std::string HexToDec(const std::uint32_t hex_input_parameter)
{
    std::uint32_t decimalValue{};
    std::stringstream hex_value{};
    std::stringstream convert_hex_to_dec_stringstream{};

    hex_value << std::hex << hex_input_parameter;
    hex_value >> decimalValue;
    convert_hex_to_dec_stringstream << decimalValue;
    return convert_hex_to_dec_stringstream.str();
}

std::string DecToOctal(const std::uint32_t dec_input_parameter)
{
    std::stringstream convert_dec_to_octal_stringstream{};

    convert_dec_to_octal_stringstream << std::oct << dec_input_parameter;
    return convert_dec_to_octal_stringstream.str();
}

std::string OctalToDec(const std::uint32_t octal_input_parameter)
{
    std::uint32_t decimalValue{};
    std::stringstream octal_value{};
    std::stringstream convert_octal_to_dec_stringstream{};

    octal_value << std::oct << octal_input_parameter;
    octal_value >> decimalValue;
    convert_octal_to_dec_stringstream << std::dec << decimalValue;
    return convert_octal_to_dec_stringstream.str();
}

void printVersion()
{
    std::cout << "Version of Converter: " << converter_version_number << '\n';
}

void clearCMD()
{
#if UNIX_LINUX_BUILD == 1
    system("clear");
#else
    system("cls");
#endif
}
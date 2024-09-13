#include "WithInputParameters.hpp"
#include "Converter.hpp"
#include "Resources.hpp"
#include <iostream>

void runWithInputParameters(const std::vector<std::string> &args)
{
    clearCMD();

    for (const auto &arg : args)
    {
        if (arg == "-version" || arg == "-Version")
        {
            printVersion();
        }
        else if (arg == "-DecToHex")
        {
            const std::size_t indexDecToHex{GetCurrentIndex(args, "-DecToHex")};
            std::cout << "Decimal to Hexadezimal Converter started\n";
            std::cout << "Decimal Input Value: " << args[indexDecToHex + 1]
                      << " Hex Value: 0x"
                      << DecToHex(std::stoul(args[indexDecToHex + 1])) << '\n';
        }
        else if (arg == "-DecToOct")
        {
            const std::size_t indexDecToOct{GetCurrentIndex(args, "-DecToOct")};
            std::cout << "Decimal to Octal Converter started\n";
            std::cout << "Decimal Input Value: " << args[indexDecToOct + 1]
                      << " Octal Value: 0"
                      << DecToOctal(std::stoul(args[indexDecToOct + 1]))
                      << '\n';
        }
        else if (arg == "-OctToDec")
        {
            const std::size_t indexOctToDez{GetCurrentIndex(args, "-OctToDec")};
            std::cout << "Octal to Decimal Converter started\n";
            std::cout << "Octal Input Value: " << args[indexOctToDez + 1]
                      << " Decimal Value: "
                      << OctalToDec(
                             std::stoi(args[indexOctToDez + 1], nullptr, octal))
                      << '\n';
        }
        else if (arg == "-HexToDec")
        {
            const std::size_t indexHexToDez{GetCurrentIndex(args, "-HexToDec")};
            std::cout << "Hex to Decimal Converter started\n";
            std::cout << "Hex Input Value: " << args[indexHexToDez + 1]
                      << " Decimal Value: "
                      << OctalToDec(
                             std::stoi(args[indexHexToDez + 1], nullptr, hex))
                      << '\n';
        }
        else if (arg == "-Help" || arg == "-help")
        {
            std::cout << "Help\n";
            std::cout << "Possible Input Parameters: \n";
            for (const auto &parameters : possible_input_paramters)
            {
                if (parameters == "Exit")
                {
                    continue;
                }
                std::cout << '-' << parameters << '\n';
            }
        }
    }
}

std::size_t GetCurrentIndex(const std::vector<std::string> &vector,
                            const std::string &value)
{
    auto vector_iterator = std::find(vector.begin(), vector.end(), value);

    if (vector_iterator != vector.end())
    {
        return std::distance(vector.begin(), vector_iterator);
    }

    return 0;
}

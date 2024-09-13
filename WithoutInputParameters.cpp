#include <iostream>
#include <string>

#include "Converter.hpp"
#include "Resources.hpp"
#include "WithoutInputParameters.hpp"

void showOptions()
{
    std::size_t choice_option{1};
    for (const auto &option : possible_input_paramters)
    {
        std::cout << choice_option << ") " << option << " ";
        ++choice_option;
    }

    std::cout << '\n';
}

void getVersion()
{
    printVersion();
}

void getDec2Hex()
{
    std::uint32_t dec_input{};
    std::cout << "Decimal to Hexadezimal Converter started\n";
    std::cout << "Please enter a Decimal Value: ";
    std::cin >> dec_input;
    std::cout << "Hex Value: 0x" << DecToHex(dec_input) << '\n';
}

void getDec2Octal()
{
    std::uint32_t dec_input{};
    std::cout << "Decimal to Octal Converter started\n";
    std::cout << "Please enter a Decimal Value: ";
    std::cin >> dec_input;
    std::cout << "Octal Value: 0" << DecToOctal(dec_input) << '\n';
}

void getHex2Dec()
{
    std::uint32_t hex_input{};
    std::cout << "Hexadecimal to Decimal Converter started\n";
    std::cout << "Please enter a Hexadecimal Value: ";
    std::cin >> std::hex >> hex_input;
    std::cout << "Decimal Value: " << HexToDec(hex_input) << '\n';
}

void getOctal2Dec()
{
    std::uint32_t octal_input{};
    std::cout << "Octal to Decimal Converter started\n";
    std::cout << "Please enter a Octal Value: ";
    std::cin >> std::oct >> octal_input;
    std::cout << " Decimal Value: " << OctalToDec(octal_input) << '\n';
}

void runWithoutInputParameters()
{
    std::uint32_t choice{};
    clearCMD();
    std::cout << "Welcome to the Converter! \n";
    showOptions();

    while (choice != input_exit)
    {
        std::cin >> choice;

        if (choice < 1 || choice > 7)
        {
            std::cout << "Invalid Parameter!\n";
            return;
        }

        switch (choice)
        {
        case input_version:
            getVersion();
            break;
        case input_dec_to_hex:
            getDec2Hex();
            break;
        case input_hex_to_dec:
            getHex2Dec();
            break;
        case input_dec_to_octal:
            getDec2Octal();
            break;
        case input_octal_to_dec:
            getOctal2Dec();
            break;
        case input_exit:
            break;
        case input_help:
        default:
            showOptions();
            break;
        }
    }
}
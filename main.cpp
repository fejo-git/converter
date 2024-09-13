#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

#include "Converter.hpp"
#include "WithInputParameters.hpp"
#include "WithoutInputParameters.hpp"


int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        const std::vector<std::string> args(argv, argv + argc);
        runWithInputParameters(args);
    }
    else
    {
        runWithoutInputParameters();
    }

    return 0;
}
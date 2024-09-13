# Converter Project

This project provides various conversion tools. It can be used via a script or run directly in a console.

## Features

- Convert Decimal to Hexadecimal
- Convert Decimal to Octal
- Convert Octal to Decimal
- Convert Hexadecimal to Decimal
- Help information
- Display Version

## Usage with Scripts

The order of input parameters doesn't matter. The key requirement is to place the input value after the feature you wish to use.

Example command:
```sh
./build/Converter -version -help -DecToHex 192 -DecToOctal 192 -HexToDec 0xC0 -OctalToDec 0300
```

## Build Instructions

To build the project on Linux/Unix, ensure that the following macro is set:
```C++
#define UNIX_LINUX_BUILD 1
```
For Windows builds, set the macro to 0:
```C++
#define UNIX_LINUX_BUILD 0
```

Use the provided Makefile to compile the project. Simply run:
```sh
make        # To build the project
make clean  # To clean the build files
```

Example Makefile:
```Makefile
# *-*Makefile*-*
all: Converter
Converter: main.cpp
	g++ main.cpp Converter.cpp WithoutInputParameters.cpp WithInputParameters.cpp -o build/Converter -std=c++20
clean:
	rm -f build/*
```

## Version

This is a preliminary version, and it may contain some bugs.

```C++
constexpr std::string_view converter_version_number{"0.0.0.1"};
```
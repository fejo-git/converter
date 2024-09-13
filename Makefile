# *-*Makefile*-*
all: Converter
Converter: main.cpp
	g++ main.cpp Converter.cpp WithoutInputParameters.cpp WithInputParameters.cpp -o build/Converter -std=c++20
clean:
	rm -f build/*
#include <iostream>
#include <cstdlib>

#include "./vendor/nlohmann-json/json.hpp"

void printUsage(char* path);

int main(int argc, char* argv[])
{
    if (argc != 3) //Arguments can only be -f <filename>
    {
        printUsage(argv[0]);
        return EXIT_FAILURE;
    }

    if (std::string(argv[1]) == "-f")
    {
        std::string filename(argv[2]);
        //do stuff
    }
    else
    {
        printUsage(argv[0]);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

void printUsage(char* path)
{
    std::cout << "Usage:\n";
    std::cout << "\t" << path << " -f <path to json file>\n"
        << "\t"
        << "Run Quiz on with <json file> as list of questions\n\n";
}
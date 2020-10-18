#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

#include "./vendor/nlohmann-json/json.hpp"

void printUsage(char*);
nlohmann::json parseJson(std::string);

int main(int argc, char* argv[])
{
    if (argc != 3) //Arguments can only be -f <filename>
    {
        printUsage(argv[0]);
        return EXIT_FAILURE;
    }

    if (std::string(argv[1]) == "-f")
    {
        std::string filePath(argv[2]);
        nlohmann::json questions = parseJson(filePath); //parse given JSON file
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

nlohmann::json parseJson(std::string filePath)
{
    std::ifstream jsonFile(filePath); //open file
    if (jsonFile)
    {
        nlohmann::json j;
        jsonFile >> j; //read given JSON file

        return j;
    }
    else //if file open failed
    {
        char errmsg[256];
#ifdef _WIN32 //strerror_s for windows
        strerror_s(errmsg, sizeof(errmsg), errno);
#else //strerror_r for POSIX
        strerror_r(errno, errmsg, sizeof(errmsg));
#endif
        std::cerr << "The file could not be opened\n";
        std::cerr << "Error: " << errmsg << "\n";
        exit(EXIT_FAILURE);
    }
}
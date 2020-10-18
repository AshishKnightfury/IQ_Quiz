#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <array>
#include <vector>
#include <algorithm>

#include "./vendor/nlohmann-json/json.hpp"

struct Question
{
    std::string txt;
    std::array<std::string, 4> option;
    int ans;
};

void printUsage(char*);
nlohmann::json parseJson(std::string);
std::vector<Question> json2Question(nlohmann::json&);
void runQuiz(std::vector<Question>&);

int main(int argc, char* argv[])
{
    if (argc != 3) //Arguments can only be -f <filename>
    {
        printUsage(argv[0]);
        return EXIT_FAILURE;
    }

    if (std::string(argv[1]) == "-f")
    {
        //parse given JSON file
        std::string filePath(argv[2]);
        nlohmann::json questionsJson = parseJson(filePath);

        //convert it into vector<Question>
        std::vector<Question> questionList;
        questionList = json2Question(questionsJson);

        //run quiz
        runQuiz(questionList);
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
#ifdef _WIN32 //strerror_s for Windows
        strerror_s(errmsg, sizeof(errmsg), errno);
#else //strerror_r for POSIX
        strerror_r(errno, errmsg, sizeof(errmsg));
#endif
        std::cerr << "The file could not be opened\n";
        std::cerr << "Error: " << errmsg << "\n";
        exit(EXIT_FAILURE);
    }
}

std::vector<Question> json2Question(nlohmann::json& jsonQ)
{
    std::vector<Question> vecQ;

    for (auto q : jsonQ["q"])
    {
        Question temp;
        temp.txt = q["txt"].get<std::string>();
        temp.ans = q["ans"].get<int>();
        temp.option = q["option"].get<std::array<std::string, 4>>();

        vecQ.push_back(temp);
    }

    return vecQ;
}

void runQuiz(std::vector<Question>& questionList)
{
    std::cout << "Welcome! Wanna check your iq?\n"
        << "The test begins here.\n\n"
        << "Instructions:\n"
        << "\tType the option number to select answer for the question.\n"
        << "\tThere is negative marking for each wrong answer.\n"
        << "\tThis game is very easy, so don't fly after the results.\n"
        << "\tFinally, don't take the this seriously, it's only a game.\n";

    std::cout << "Ready? (y/n) ";
    std::string ready;
    std::cin >> ready;
    std::cout << "\n";
    std::transform(ready.begin(), ready.end(), ready.begin(), [](unsigned char c) { return std::tolower(c); });
    if (ready == "n" || ready == "no")
    {
        std::cout << "That's alright. Exiting for now; you can play again by starting this program\n";
        return;
    }
    else if (ready == "y" || ready == "yes")
    {
        std::cout << "Cool! Starting in 3..2..1\n\n";

        //Initialize score to zero
        int score = 0;
        int maxScore = 0;

        for (auto q : questionList)
        {
            //print question text
            std::cout << q.txt << "\n";
            maxScore += 2;

            //print options
            for (int i = 1; i <= 4; ++i)
            {
                std::cout << i << ". " << q.option[i - 1] << "\n";
            }

            //get user input
            std::cout << "\nAnswer: ";
            std::string in;
            std::cin >> in;
            std::cout << "\n";

            //parse user input
            if (in.size() != 1)
            {
                std::cout << "What is this? Enter an option between 1 and 4\n"
                    << "Points will be deducted\n\n";
                --score;
            }
            else
            {
                //parse char to int
                int userAns = (int)(in[0] - '0');

                //evaluate answer
                if (userAns == q.ans)
                {
#ifdef _WIN32 //Wasn't able to get emojis working correctly in Windows 10 1909 with MSVC 2019
                    std::cout << "Correct!"
                        << "\n\n";
#else //Ubuntu on WSL with g++ woks fine with emojis (using Windows Terminal)
                    std::cout << "\xE2\x9C\x94\xEF\xB8\x8F"
                        << "\n\n";
#endif
                    score += 2;
                }
                else
                {
#ifdef _WIN32 //Wasn't able to get emojis working correctly in Windows 10 1909 with MSVC 2019
                    std::cout << "Wrong!"
                        << "\n\n";
#else //Ubuntu on WSL with g++ woks fine with emojis
                    std::cout << "\xE2\x9D\x8C"
                        << "\n\n";
#endif
                    score -= 1;
                }
            }
        }

        std::cout << "You scored: " << score
            << " out of " << maxScore << "\n";
        std::cout << "\nThanks for playing!\n";
    }
    else
    {
        std::cout << "Wut? I didn't get that. Try again after you restart the program\n";
        std::cout << "Exiting\n";
        return;
    }
}

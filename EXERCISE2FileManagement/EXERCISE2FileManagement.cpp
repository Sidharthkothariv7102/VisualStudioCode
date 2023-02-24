// EXERCISE2FileManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    std::ifstream Input{ "Information.txt" };

    //checking if the file is open 
    if (!Input.is_open())
    {
        std::cout << "Unable to read the file";
    }

    //reading the file and echoing it to the console 
    std::string OutputString;
    while (!Input.eof())
    {
        std::getline(Input, OutputString);
        std::cout << OutputString << '\n';
    }

    //printing even lines only 
    std::ofstream Output{ "EvenLines.txt" };
    std::vector<std::string> VectorString;
    int i = 0;
    while (!Input.eof())
    {
        std::getline(Input, OutputString);
        VectorString.push_back(OutputString);
        i++;
        if (i % 2 == 0)
        {
            Output << OutputString << '\n';
        }
    }
}

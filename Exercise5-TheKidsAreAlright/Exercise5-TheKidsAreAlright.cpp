// Exercise5-TheKidsAreAlright.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Copyrighr Sidharth Kothari.All rights reserved.

#include <iostream>
#include "Kid.h"
#include "Kid1.h"
#include "Gamer.h"

int main()
{
    //Initialising the class objects
    Kid FirstKid{ 100 };
    Kid1 FirstChild{ 50 };
    Gamer FirstGamer{ 100 };
    
    //Printing The Message.
    FirstKid.PrintMessage();
    std::cout << "\n";
    FirstChild.PrintMessage();
    FirstChild.getScore();
    std::cout << "\n";
    FirstGamer.PrintMessage();
    FirstGamer.getScore();

}



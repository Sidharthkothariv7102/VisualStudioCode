// AppleClassC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Copyright Sidharth Kothari. All rights reserved.

#include <iostream>

#include "Apple.h"

int main()
{
    const float BiteSize{2};
    
    Apple TestApple(true,12);
    std::cout << "The apple is organic:" << TestApple.IsOrganic()<<"\n";
    std::cout << "The size of the apple is :" << TestApple.GetAmountLeft();

    while (TestApple.GetAmountLeft() > BiteSize)
    {
        TestApple.TakeBite(BiteSize);
        std::cout << "Taking a bite. The Amount Of Apple Left "<<TestApple.GetAmountLeft()<<"\n";
    }
}

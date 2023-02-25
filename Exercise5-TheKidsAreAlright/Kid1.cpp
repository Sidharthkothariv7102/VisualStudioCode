#include "Kid1.h"
#include <iostream>

Kid1::Kid1(int Score) : Kid{ Score }
{
	this->score = Score;
}

void Kid1::PrintMessage()
{
	std::cout << "Hi my name is Kid1";
	//std::cout << score;
}


Kid1::~Kid1()
{

}
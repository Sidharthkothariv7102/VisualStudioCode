#include "Kid.h"
#include <iostream>

void Kid::PrintMessage()
{
	std::cout << "Hi my name is kid!";
}

Kid::Kid(int Score)
{
	this->score = Score;
}

int Kid::getScore()
{
	std::cout << "The Score is:" << score;
	return score;
}

Kid::~Kid()
{

}
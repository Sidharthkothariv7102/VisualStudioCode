#include "Gamer.h"
#include <iostream>

void Gamer::PrintMessage()
{
	std::cout << "Hi my Name is Gamer";
}

Gamer::Gamer(int Score) : Kid{Score}
{
	this->score = Score;
}

Gamer::~Gamer()
{

}
#pragma once

#include <iostream>
#include "Kid.h"

class Gamer : public Kid
{
public:
	void PrintMessage() override;

	Gamer(int Score);

	~Gamer();
};


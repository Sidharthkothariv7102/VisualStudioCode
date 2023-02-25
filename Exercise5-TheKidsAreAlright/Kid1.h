#pragma once

#include "Kid.h"

class Kid1 : public Kid
{
public:
	
	Kid1(int Score);
	
	void PrintMessage() override;

	~Kid1();
};


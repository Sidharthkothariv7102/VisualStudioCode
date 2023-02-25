#pragma once
class Kid
{

public:

	int score;

	Kid(int Score);
	
	~Kid();
	
	int getScore();

	virtual void PrintMessage();
};


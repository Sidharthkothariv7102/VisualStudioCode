// Exercise11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>

int main()
{
	std::string TheString;
	std::cin >> TheString;
	
	int CommaLocation;
	CommaLocation = TheString.find(',');

	// Getting The pyramid slot number
	int SlotNo = std::stoi(TheString.substr(0, CommaLocation));

	char BlockLetter = TheString[CommaLocation + 1];

	TheString = TheString.substr(CommaLocation + 1);
	CommaLocation = TheString.find(',');
	bool lit = false;
	if (TheString.substr(CommaLocation + 1) == "true")
	{
		lit = true;
	}

	//printing
	std::cout << "The block number is:" << SlotNo << "\n" << "The BlockLetter is:" << BlockLetter << "\n" << "The light should be lit?" << lit;
	
}


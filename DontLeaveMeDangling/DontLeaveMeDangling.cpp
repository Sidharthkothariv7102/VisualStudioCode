// DontLeaveMeDangling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
  // creating a float pointer
	float* PointerToFloat;
  
	// allocating new memory to the pointer
	PointerToFloat = new float;

	std::cout << "The value pointer pointing to is:" << * PointerToFloat;

	//Problem 2
	*PointerToFloat = 69.69;
	std::cout << "The value pointer pointing to is:" << *PointerToFloat;

	//releasing the memory
	delete PointerToFloat;
	PointerToFloat = nullptr;

	//accesing Dangling Pointer
	std::cout << "The value pointer pointing to is:" << *PointerToFloat;

}


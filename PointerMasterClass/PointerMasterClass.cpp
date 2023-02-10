// PointerMasterClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//creating 2 shared pointers
	std::shared_ptr<float> SharedPointer1{ new float };
    std::shared_ptr<float> SharedPointer2;

	//printing the first shared pointer Problem 1
	std::cout << "The Value of the float 1st shared pointer pointing to is: " << *SharedPointer1 <<"\n";

	//Problem2 : Set the second pointer to the first pointer and deference both pointers to print the value of the float they point to.
	SharedPointer2 = SharedPointer1;
	std::cout << "The Value of the float 1st & 2nd shared pointer pointing to respectively is: " << *SharedPointer1 << " "<< * SharedPointer2<<"\n";

	//Problem 3:Change the value of the float the first pointer points to, then print the value of the float the second pointer points to.
	*SharedPointer1 = 69.69;
	std::cout << "The value of the float 2nd shared pointer pointing to is: " << *SharedPointer2;
}



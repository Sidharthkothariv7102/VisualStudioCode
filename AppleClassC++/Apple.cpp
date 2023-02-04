//Copyright Sidharth Kothari. All rights reserved

#include "Apple.h"

float Apple::GetAmountLeft()
{
	return Amountleft;
}

bool Apple::IsOrganic()
{
	return Organic;
}

Apple::Apple(bool Organic, float AmountLeft)
{
	this->Organic = Organic;
	this->Amountleft = AmountLeft;
}

void Apple::TakeBite(float Size) 
{
	Amountleft -= Size;
}
//Copyright Sidharth Kothari.All rights reserved


#pragma once


class Apple
{

private:
	float Amountleft;
	bool Organic;
	float Size;

public:
     
	//Creating a constructor with two parameters 
	Apple(bool Organic, float AmountLeft);

	 /*
	 * Get Amount Of Apples left
	 */
	 float GetAmountLeft();

	 /*
	 *Get if the apple is organic or not
	 */
	 bool IsOrganic();

	 //to take a bite from the apple
	 void TakeBite(float Size);

	

};


// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Deck.h"

#include "Card.h"

using namespace consoleCards;


/**
 * Exercise 10
 * @return exit status 
*/
int main()
{
	Deck CardDeck;

	//telling deck to shuffle itself
	CardDeck.Shuffle();

	//Creating a Card Array
	Card CardArray[2];

	for (int i = 0; i < 2; i++)
	{//taking a card from the top of the deck and adding it to the array 
		CardArray[i] = CardDeck.TakeTopCard();

		//flipping the card over
		CardArray[i].FlipOver();

		//printing the rank and suit of the card
		std::cout << CardArray[i].GetRank()<<" ";
		std::cout << CardArray[i].GetSuit()<<"\n";
	}
}


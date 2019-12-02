#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "cardType.h"

using namespace std;

int cardType::numOfShuffles = 0;

///FUNCTIONS////////////////////////////////
void initializeDeck(cardType card[])
{
	for (int i=0; i<52; i++)
	{
		/////////////////////////////////////////////////////////////////////
		if (i<13) 
		{
			card[i].cardSuit = "Hearts";
		} else
		
		if (i>=13 && i<26) 
		{
			card[i].cardSuit = "Spades";
		} else

		if (i>=26 && i<39) 
		{
			card[i].cardSuit = "Diamonds";
		} else

		if (i>=39 && i<52) 
		{
			card[i].cardSuit = "Clubs";
		}
		//The above If/else statements set the Suits of the cards in the array////


		/////////////////////////////////////////////////////////////////////
		if (i == 0 || i==13 || i==26 || i==39)	
		{
			card[i].cardValue = "Two";
		} //Sets every thirteenth card Value to Two, once for each suit

		if (i == 1 || i==14 || i==27 || i==40)	
		{
			card[i].cardValue = "Three";
		} //Sets every thirteenth card Value to Three, once for each suit

		if (i == 2 || i==15 || i==28 || i==41)	
		{
			card[i].cardValue = "Four";
		} //Sets every thirteenth card Value to Four, once for each suit
	
		if (i == 3 || i==16 || i==29 || i==42)	
		{
			card[i].cardValue = "Five";
		} //Sets every thirteenth card Value to Five, once for each suit

		if (i == 4 || i==17 || i==30 || i==43)	
		{
			card[i].cardValue = "Six";
		} //Sets every thirteenth card Value to Six, once for each suit

		if (i == 5 || i==18 || i==31 || i==44)	
		{
			card[i].cardValue = "Seven";
		} //Sets every thirteenth card Value to Seven, once for each suit

		if (i == 6 || i==19 || i==32 || i==45)	
		{
			card[i].cardValue = "Eight";
		} //Sets every thirteenth card Value to Eight, once for each suit

		if (i == 7 || i==20 || i==33 || i==46)	
		{
			card[i].cardValue = "Nine";
		} //Sets every thirteenth card Value to Nine, once for each suit

		if (i == 8 || i==21 || i==34 || i==47)	
		{
			card[i].cardValue = "Ten";
		} //Sets every thirteenth card Value to Ten, once for each suit

		if (i == 9 || i==22 || i==35 || i==48)	
		{
			card[i].cardValue = "Jack";
		} //Sets every thirteenth card Value to Jack, once for each suit

		if (i ==10 || i==23 || i==36 || i==49)	
		{
			card[i].cardValue = "Queen";
		} //Sets every thirteenth card Value to Queen, once for each suit

		if (i == 11 || i==24 || i==37 || i==50)	
		{
			card[i].cardValue = "King";
		} //Sets every thirteenth card Value to King, once for each suit

		if (i == 12 || i==25 || i==38 || i==51)	
		{
			card[i].cardValue = "Ace";
		} //Sets every thirteenth card Value to Ace, once for each suit

		//The above if statements set the Face Values of the cards in the array//
	}

}
//POSTCONDITION: The provided deck of cards is set to a standard initial order



void shuffleDeck(cardType deckOfCards[])
{
	//make 2 temporary cardType buffers called top and bottom
	cardType topHalf[26];
	cardType bottomHalf[26];
	
	
	int summy;
	//cout << "declared the halves" <<endl;
	//cin >> summy;
	
	//copy the respective top and bottom of the decks into their buffers
	for (int i=0;i<26;i++)
	{
		topHalf[i] = deckOfCards[i];
		//topHalf[i].cardValue = deckOfCards[i].cardValue;
		
	//cout << "top half card " << i << "copied" << endl;
	
		bottomHalf[i] = deckOfCards[(i+26)];
		//bottomHalf[i].cardValue = deckOfCards[i+26].cardValue;
	
	//cout << "bot half card " << i << "copied" << endl;
	}
	
	cout << "deck copied successfully" << endl;
		//cin >> summy;

	

	//save the buffers to the original array, one card at a time 
	//alternating between the top and bottom halves of the split deck.
		
	for (int i=0;i<26;i++)
	{
		//declare a variable to track the place in the deck we're saving to
		int deckTracker = 0;
		
		deckOfCards[deckTracker] = topHalf[i];
		//deckOfCards[deckTracker].cardValue = topHalf[i].cardValue;

		deckTracker++;
	

		deckOfCards[deckTracker] = bottomHalf[i];
		//deckOfCards[deckTracker].cardValue = bottomHalf[i].cardValue;
		
		deckTracker++;
	

	}

	//cin >> summy;
}
//POSTCONDITION: The array of cards (the deck) has been shuffled once perfectly.
// 		The counter tracking the number of shuffles is incremented by one.
//METHOD: Two buffers are created, half the size of the deck. The first 26 cards
//		in the deck are copied to one buffer [Top], and the last 26 are copied to 
//		the other [Bottom}. Then, it saves the cards back into the deck from the
//		buffers from the top down in alternating order.


bool equals(cardType deck[],cardType controlDeck[])
{
	bool equals = true;
	
	for (int i=0;i<52;i++)
	{
		if (deck[i].cardSuit != controlDeck[i].cardSuit ||
			deck[i].cardValue != controlDeck[i].cardValue )
			{
				equals = false;
			}
	}
		
	return equals;
}
//POSTCONDITION: Returns false if the decks are in a different order
//		Returns true if the decks are in the same order


void printDeck(cardType deck[])
{
	
	for (int i=0;i<52;i++)
	{
		cout << deck[i].cardValue << " of " << deck[i].cardSuit << endl;
	}
	
}
//POSTCONDITION: Function prints the string values of each card object in
//		the passed array of cards (deck), each printed on a new line.


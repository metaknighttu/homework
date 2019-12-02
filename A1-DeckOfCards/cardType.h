#ifndef CARDTYPE_H
#define CARDTYPE_H

using namespace std;

struct cardType
{
	string cardSuit;
	string cardValue;
	
	static int numOfShuffles;
};

void shuffleDeck(cardType[]);

void initializeDeck(cardType[]);

bool equals(cardType[],cardType[]);

void printDeck(cardType[]);

#endif
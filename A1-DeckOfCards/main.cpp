#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "cardType.h"

using namespace std;

int main() 
{
	    cout << "-------------------------------------" << endl;
        cout << "Assignment 1: Perfect Shuffle of Deck" << endl;
        cout << "-------------------------------------" << endl;
        cout << "     George Good - CS1C M/W 2:30     " << endl;
        cout << "-------------------------------------" << endl;
        cout << "This program will create an ordered deck of cards," << endl;
        cout << "Then it will split the deck evenly and shuffle it together perfectly" << endl;
        cout << "Once done, the shuffled deck is printed." << endl;
        cout << "Then, the program reshuffles the deck agin and again until" << endl;
        cout << "it is back in its original order, then prints the number of shuffles." << endl <<endl;

	
	//Declare the deck and then initialize it with card values via function
	cout << "Initializing first Deck of Cards:" << endl;
	cardType deckOfCards[52];
	initializeDeck(deckOfCards);
	
	
	//Declare and initialize a copy of the same ordered deck for verification later.
	cout << "Initializing Control Deck of Cards:" << endl;
	cardType controlDeck[52];
	initializeDeck(controlDeck);
	
	
	//Initialize the static variable to keep track of the number
	//of times the deck is shuffled
	//deckOfCards[0].numOfShuffles = 0;
	
	
	//Print the Deck to show it has been initialized in an order
	cout << "Now printing the order of the ordered deck of cards: " << endl;
	printDeck(deckOfCards);


	int dummy;

	
	//Execute the first ordered shuffle
	cout << endl << "Now shuffling the ordered deck:" << endl;
	shuffleDeck(deckOfCards);
		
		
	//Increment the number of times the deck has been shuffled.
	deckOfCards[0].numOfShuffles++;
	cout << "Number of Shuffles: " << deckOfCards[0].numOfShuffles <<endl;
	
	//Print the newly shuffled deck to show its new order
	cout << "Now printing the order of the deck after one shuffle: " << endl;
	printDeck(deckOfCards);

	
	//Continue to re-call the shuffle function, each time incrementing the 
	//shuffle counter and checking the shuffled deck against
	// the control deck, stopping once they match
	cout << "Now shuffling the deck back into its original order: " << endl;
	
	do
	{
		//Shuffle the deck in the same manner as before
		shuffleDeck(deckOfCards);
			printDeck(deckOfCards);

		//Increment the number of times the deck has been shuffled.
		deckOfCards[0].numOfShuffles++;
			cout << "Number of Shuffles: " << deckOfCards[0].numOfShuffles <<endl;
			
			cin >> dummy;
		
	}while(equals(deckOfCards,controlDeck) != true);
	

	// Print the number of times the deck was shuffled to return
	// it to its original order
	cout << "Number of shuffles made until deck became reordered: " << deckOfCards[0].numOfShuffles;

	return 0;
}


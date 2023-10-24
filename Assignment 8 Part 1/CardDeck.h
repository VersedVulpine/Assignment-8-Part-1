#pragma once

#include <iostream>

#include<string> // for naming the card Suit. must find a better way of doing this...


using namespace std;

class CardDeck
{

private:
	
	//int suit;	// old method of tracking suits
	string suits[4] = { "Clover", "Diamond", "Heart", "Spade" }; //Card Suit (Spade, Clover, Heart, Diamond)
	int value;	// Card Value (1 to 13)


public:
	CardDeck() {}	// Initializer
	~CardDeck() {}	// Destructor
	
	void setDeckSize(int newSize);	// The max Value of a Card in a suit
	void getDeckSize();				// The highest value, times the suit amount (x * 4)

	void setShuffleDeck();			// will get the size and shuffle the deck in random order
	void getShuffleDeck();			//
	
	void getCard();					// will pull a card from a Deck, and remove it from the vector
	void returnCard();				// adds back a value of a card to the deck, unless the card is already in the deck.

	

};


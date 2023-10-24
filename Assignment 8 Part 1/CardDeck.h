#pragma once

#include <iostream>
using namespace std;

class CardDeck
{


private:
	
	int suit; //Card Suit (Spade, Clover, Heart, Diamond)
	int value; // Card Value (1	to 13)


public:
	CardDeck() {}	// Initializer
	~CardDeck() {} //Destructor
	
	void setDeckSize(int newSize);


};


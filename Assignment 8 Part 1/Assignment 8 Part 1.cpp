// Assignment 8 Part 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "input.h"
using namespace std;

//prototypes
int menuOptions();
void simulation1();
void simulation2();
void simulation3();

int main()
{
	do {
		switch (menuOptions()) {
		case 0: exit(1); break;
		case 1: simulation1(); break;
		case 2: simulation2(); break;
		case 3: simulation3(); break;
		default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
		}
		cout << "\n";
		system("pause");
	} while (true);
	return EXIT_SUCCESS;
}

int menuOptions() {
	system("cls");
	cout << "\n\t Chapter 8: Application of Queues ";
	cout << "\n\t" << string(100, char(205));

	cout << "\n\t\t1> Simulation of War (card game) using deque STL";
	cout << "\n\t\t2> Simulation of an emergency room (ER) using priority queue STL";
	cout << "\n\t\t3> Simulation of checkout lines at Costco using multiple queues STL";
	cout << "\n\t" << string(100, char(205));

	cout << "\n\t\t0> Exit";
	cout << "\n\t" << string(100, char(205));

	return inputInteger("\n\t\tOption: ", 0, 3);

	
}


void simulation1() {

	int cardSetSize;

	system("cls");
	cout << "\n\t\t1> Simulation of War (card game) using deque STL" << endl;
	cardSetSize = inputInteger("\n\t\tEnter a number of cards per suite. 1 to 13\n\t\t", 1, 13);
	cout << "\t\tThe suite size is " << cardSetSize;
}

void simulation2() {

	
}

void simulation3() {


}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

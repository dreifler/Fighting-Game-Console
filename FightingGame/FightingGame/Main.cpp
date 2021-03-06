// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "FightGame.h"

void PrintIntro();
void ListFighters();
void PrintOptions();
void RunFight();
bool PlayAgain();

FightGame FGame;

int main()
{
	bool bAgain = false;

	do 
	{
		PrintIntro();
		ListFighters();
		PrintOptions();
		RunFight();
		bAgain = PlayAgain();
	} while (!bAgain);

	return 0;
}

void PrintIntro() 
{
	std::cout << "This is the first prototype of a text-based fighting game.\n";
	std::cout << "This version is done to create the initial game structure,\n";
	std::cout << "and to establish the basic fighting mechanics.\n" << std::endl;
	std::cout << "Match up two fighters to run a fight simulation.\n";
}

void ListFighters()
{
}

void PrintOptions()
{
}

void RunFight()
{
	// Find out which fighter gets initiative 

	// Loop through both fighters. Exit loop on a win. 

		// Run Turn fighter 1

		// Run Turn fighter 2

	// Print victory message
}

bool PlayAgain()
{
	return false;
}

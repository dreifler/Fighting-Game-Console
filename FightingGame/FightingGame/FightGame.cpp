#include "FightGame.h"
#include <string>

FightGame::FightGame()
{
}

std::list<Fighter> FightGame::GetFighterList()
{
	return std::list<Fighter>();
}

void FightGame::CreateFighterList()
{
}

Fighter FightGame::CreateFighter()
{
	return Fighter();
}

unsigned int FightGame::Initiative()
{
	return 0;
}

void FightGame::Attack()
{
}

bool FightGame::CheckWin()
{
	return false;
}

void FightGame::DecideMove()
{
}

void FightGame::RunTurn()
{
	// decide move
	// attack
	// check for win
	// update hps and output
}

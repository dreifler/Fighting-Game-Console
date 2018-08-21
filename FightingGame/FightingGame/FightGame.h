#pragma once
#include <string>
#include <list>

struct Fighter 
{
	unsigned int id;
	unsigned int str;
	unsigned int spd;
	unsigned int agl;
	unsigned int hp;
	std::string weapon;//TODO replace with enumeration of choices
	std::string armor;//TODO replace with enumeration of choices
};

class FightGame
{
public:
	FightGame();
	std::list<Fighter> GetFighterList();
	void CreateFighterList();
	unsigned int Initiative();
	void Attack();
	bool CheckWin();
	void DecideMove();
	void RunTurn();//TODO use run turn to combine decide move, attack and check win for one fighters turn
			

private:
	std::list<Fighter> FighterList;

};


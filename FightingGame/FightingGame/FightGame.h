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
	enum weapon { sword, bow };
	enum armor {leather, plate};
};

class FightGame
{
public:
	FightGame();
	std::list<Fighter> GetFighterList();
	void CreateFighterList();
	Fighter CreateFighter();
	unsigned int Initiative();
	void Attack();
	bool CheckWin();
	void DecideMove();
	void RunTurn();//TODO use run turn to combine decide move, attack and check win for one fighters turn
			

private:
	std::list<Fighter> FighterList;

};


#pragma once
#include <iostream>
#include "../../pokemon/Pokemon.h"
#include "battle/Battle.h"

class Pokemon;

class TurnSystem
{
	Battle battle;
public:
	void myTurn(Pokemon& attacker, Pokemon& defender);
	void rivalTurn(Pokemon& attacker, Pokemon& defender);

};


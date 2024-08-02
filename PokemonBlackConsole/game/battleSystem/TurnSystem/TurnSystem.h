#pragma once
#include <iostream>
#include "../../pokemon/Pokemon.h"

class Pokemon;

class TurnSystem
{
	//battle
public:
	void myTurn(Pokemon& attacker, Pokemon& defender);
	void rivalTurn(Pokemon& pokemon, Pokemon& defender);

};


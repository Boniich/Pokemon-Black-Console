#pragma once
#include <iostream>
#include "../../../pokemon/Pokemon.h"


class Pokemon;

class Battle
{
public: 
	void makeDamage(Pokemon& attacker, Pokemon& defeder, Attack attack);
};


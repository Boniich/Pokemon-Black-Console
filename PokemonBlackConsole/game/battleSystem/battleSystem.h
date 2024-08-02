#pragma once
#include "../pokemon/Pokemon.h"
#include <iostream>

class Pokemon;

class BattleSystem {
	//instancia del sistema de turnos
	bool endBattle = true;

private:
	bool isPokemonAlive(Pokemon pokemon);

public:
	void startBattle(Pokemon& attacker, Pokemon& defender);

};
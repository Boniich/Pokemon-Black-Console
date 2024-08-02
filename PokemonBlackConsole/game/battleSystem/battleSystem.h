#pragma once
#include "../pokemon/Pokemon.h"

class Pokemon;

class BattleSystem {
	//instancia del sistema de turnos
	bool endBattle = true;

private:
	bool checkPokemonPs(Pokemon pokemon);

public:
	void startBattle(Pokemon& attacker, Pokemon& defender);

};
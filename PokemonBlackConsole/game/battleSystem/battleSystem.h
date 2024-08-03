#pragma once
#include "../pokemon/Pokemon.h"
#include "./TurnSystem/TurnSystem.h"
#include <iostream>

class Pokemon;

class BattleSystem {
	//instancia del sistema de turnos
	TurnSystem turnSystem;
	bool endBattle = false;

private:
	bool ispokemonDefeated(Pokemon pokemon);

public:
	void startBattle(Pokemon& attacker, Pokemon& defender);

};
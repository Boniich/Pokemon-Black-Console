#include "BattleSystem.h"

void BattleSystem::startBattle(Pokemon& attacker, Pokemon& defender) {
	do {
	
	} while (!this->endBattle);
}

bool BattleSystem::isPokemonAlive(Pokemon pokemon) {
	if (pokemon.getPs() <= 0) {
		return false;
	}
	return true;
}
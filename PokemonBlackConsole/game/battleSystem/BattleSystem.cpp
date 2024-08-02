#include "BattleSystem.h"

void BattleSystem::startBattle(Pokemon& attacker, Pokemon& defender) {
	do {
	
	} while (!this->endBattle);
}

bool BattleSystem::checkPokemonPs(Pokemon pokemon) {
	if (pokemon.getPs() <= 0) {
		this->endBattle = false;
	}
}
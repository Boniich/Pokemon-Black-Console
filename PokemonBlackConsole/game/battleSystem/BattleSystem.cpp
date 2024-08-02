#include "BattleSystem.h"

void BattleSystem::startBattle(Pokemon& attacker, Pokemon& defender) {
	do {
	
		//mi turno
		if (isPokemonAlive(defender)) {
			std::cout << "El pokemon rival fue derrotado. Tu ganas!" << std::endl;
			this->endBattle = true;
		}
		else {
			//rivalTurn
			if (isPokemonAlive(attacker)) {
				std::cout << "El pokemon alaido fue derrotado. Tu pierdes!" << std::endl;
				this->endBattle = true;
			}
		}
	} while (!this->endBattle);
}

bool BattleSystem::isPokemonAlive(Pokemon pokemon) {
	if (pokemon.getPs() > 0) {
		return true;
	}
	return false;
}
#include "BattleSystem.h"

void BattleSystem::startBattle(Pokemon& attacker, Pokemon& defender) {
	do {
		turnSystem.myTurn(attacker, defender);
		//mi turno
		if (ispokemonDefeated(defender)) {
			std::cout << "El pokemon rival fue derrotado. Tu ganas!" << std::endl;
			this->endBattle = true;
		}
		else {
			//rivalTurn
			turnSystem.rivalTurn(defender, attacker);
			if (ispokemonDefeated(attacker)) {
				std::cout << "El pokemon alaido fue derrotado. Tu pierdes!" << std::endl;
				this->endBattle = true;
			}
		}
	} while (!this->endBattle);
}

bool BattleSystem::ispokemonDefeated(Pokemon pokemon) {
	if (pokemon.getPs() > 0) {
		return false;
	}
	return true;
}
#include "Battle.h"

void Battle::makeDamage(Pokemon& attacker, Pokemon& defender, Attack attack) {
	int attackStat = Fisico ? attacker.getPhysicalAttack() : attacker.getSpecialAttack();
	int defenseStat = Fisico ? defender.getPhysicalDefense() : defender.getSpecialDefense();

	int danio = (((2 * attacker.getLevel() * attack.getPotency() * (attackStat / defenseStat)) / 5) + 2);

	std::cout << attacker.getName() << " uso " << attack.getName()<<" causa "<<danio <<" de danio"<<std::endl;
	defender.reducePS(danio);
}
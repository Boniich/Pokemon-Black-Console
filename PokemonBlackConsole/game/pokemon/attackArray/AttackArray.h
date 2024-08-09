#pragma once
#include <iostream>
#include "../../attacks/Attack.h"

class AttackArray
{
	Attack* attackPtr;
	int lengthArray;
	int minAttackAmount;
	int maxAttackAmount;
public:
	AttackArray();
	~AttackArray();

	void loadInitialAttacks(Attack initialAttacks[], int attacksAmount);
	void pushAttack(Attack attack);
	void setMinAttackAmount(int);
	void setMaxAttackAmount(int);
	int getLengthArray();
	Attack* getAttack();
};

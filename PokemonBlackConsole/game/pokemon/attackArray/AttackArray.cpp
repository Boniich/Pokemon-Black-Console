#include "AttackArray.h"
#include "AttackArray.h"

AttackArray::AttackArray() {
	this->attackPtr = nullptr;
	std::cout << "La dir del punteor es " << &this->attackPtr << std::endl;
	this->lengthArray = 0;
	this->minAttackAmount = 1;
	this->maxAttackAmount = 4;
}

AttackArray::~AttackArray() {
	std::cout << "Se ejecuto " << std::endl;
	delete[] this->attackPtr;
}

void AttackArray::loadInitialAttacks(Attack initialAttacks[], int attacksAmount) {


	if (this->attackPtr == nullptr) {

		if (attacksAmount > 4) {
			std::cout << "Un pokemon no puede aprender mas de 4 ataques";
		}
		else if (attacksAmount >= this->minAttackAmount && attacksAmount <= this->maxAttackAmount) {

			this->attackPtr = new Attack[attacksAmount];

			for (int i = 0; i < attacksAmount; i++) {
				this->attackPtr[i] = initialAttacks[i];
			}

			this->lengthArray = attacksAmount;
		}
	}
	else {
		std::cout << "El pokemon ya tiene ataques iniciales! Concidere usar un metodo que agregue ataques" << std::endl;
	};

}

void AttackArray::pushAttack(Attack attack) {
	//TODO
}


int AttackArray::getLengthArray() { return this->lengthArray; };

Attack* AttackArray::getAttack() {
	return this->attackPtr;
}

void AttackArray::setMinAttackAmount(int minAttackAmount) { this->minAttackAmount = minAttackAmount; }
void AttackArray::setMaxAttackAmount(int maxAttackAmount) { this->maxAttackAmount = maxAttackAmount; }

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
	//1- comprobamos que el array no supere la maxima capacidad
	//2- si la supera debemos pedirle al usuario que elimine un attacke
	//3- Si no la supera, debemos copiar los attackes actuales en un array temporal
		//3.1 - eliminar el array actual
		//3.2 - pedir nuevamente array pero con mas memoria
	int opcion = 0;

	if (this->lengthArray == this->maxAttackAmount) {
		//debemos pedirle al usuario que elimine un ataque
		std::cout << "No se puede aprender mas de cuatro ataques. Debes eliminar un ataque para aprender " << attack.getName() << std::endl;
		std::cout << "Seguro que deseas hacerlo?" <<std::endl;
		std::cout << "1- Si" << std::endl;
		std::cout << "2- No" << std::endl;
		std::cin >> opcion;

		if (opcion == 1) {
			for (int i = 0; i < this->lengthArray; i++) {
				std::cout << (i + 1) << "- " <<this->getAttack()[i].getName() << std::endl;
			}
			std::cout << "Selecciona una opcion: ";
			std::cin >> opcion;

			this->getAttack()[opcion - 1] = attack;
		}
		else {
			std::cout << "Si desides no aprender este ataque, puede ser que no puedas aprenderlo luego" << attack.getName() << std::endl;
			std::cout << "Estas seguro?";
			std::cout << "1- Si" << std::endl;
			std::cout << "2- No" << std::endl;
			std::cin >> opcion;
		}
	}
	else {
		int auxLength = this->lengthArray + 1;
		Attack* aux = new Attack[auxLength];
		for (int i = 0; i < auxLength; i++) {
			if (i == this->lengthArray) {
				aux[i] = attack;
			}
			else {
				aux[i] = this->attackPtr[i];
			}
		}
		delete[] this->attackPtr;

		this->attackPtr = new Attack[auxLength];

		for (int i = 0; i < auxLength; i++) {
			this->attackPtr[i] = aux[i];
		}
		delete[] aux;

		this->lengthArray = auxLength;
		//se hace el proceso de copiar, borrar, pedir nueva memoria y darle forma al nuevo array
	}
}


int AttackArray::getLengthArray() { return this->lengthArray; };

Attack* AttackArray::getAttack() {
	return this->attackPtr;
}

void AttackArray::setMinAttackAmount(int minAttackAmount) { this->minAttackAmount = minAttackAmount; }
void AttackArray::setMaxAttackAmount(int maxAttackAmount) { this->maxAttackAmount = maxAttackAmount; }

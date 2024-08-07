#include "Pokemon.h"

Pokemon::Pokemon() :gender(), type() {
};

Pokemon::Pokemon(
	int pokemonNumberList, std::string name, GENDERES GENDER, TYPES TYPE, int ps , int maxPs, int level,
	int physicalAttack, int specialAttack, int physicalDefense, int specialDefense, int speed, POKEMONSTATUS status
) :gender(GENDER), type(TYPE) {


	this->pokemonNumberList = pokemonNumberList;
	this->name = name;
	this->ps = ps;
	this->maxPs = maxPs;
	this->level = level;
	this->physicalAttack = physicalAttack;
	this->specialAttack = specialAttack;
	this->physicalDefense = physicalDefense;
	this->specialDefense = specialDefense;
	this->speed = speed;
	this->status = status;
};

Pokemon::~Pokemon() {
	delete[] this->attackPtr;
}

void Pokemon::reducePS(int danio) {

	this->ps = this->ps - danio;
}

int Pokemon::getPokemonNumberList() { return this->pokemonNumberList; }
void Pokemon::setPokemonNumberList(int pokemonNumberList) { this->pokemonNumberList = pokemonNumberList; };

std::string Pokemon::getName() { return this->name; };
void Pokemon::setName(std::string name) { this->name = name; };

std::string Pokemon::getGender() { return this->gender.getGender(); };

std::string Pokemon::getType() { return this->type.getType(); };
void Pokemon::setType(Type type) { this->type = type; };

int Pokemon::getPs() { return this->ps; };
void Pokemon::setPs(int ps) { this->ps = ps; };

int Pokemon::getMaxPs() { return this->maxPs; };
void Pokemon::setMaxPs(int maxPs) { this->maxPs = maxPs; };

int Pokemon::getLevel() { return this->level; };
void Pokemon::setLevel(int) { this->level = level; };


int Pokemon::getPhysicalAttack() { return this->physicalAttack; };
void Pokemon::setPhysicalAttack(int physicalAttack) { this->physicalAttack = physicalAttack; };

int Pokemon::getSpecialAttack() { return this->specialAttack; }
void Pokemon::setSpecialAttack(int specialAttack) { this->specialAttack = specialAttack; };

int Pokemon::getPhysicalDefense() { return this->physicalDefense; };
void Pokemon::setPhysicalDefense(int physicalDefense) { this->physicalDefense = physicalDefense; };

int Pokemon::getSpecialDefense() { return this->specialDefense; };
void Pokemon::setSpecialDefense(int specialDefense) { this->specialDefense = specialDefense; };

int Pokemon::getSpeed() { return this->speed; };
void Pokemon::setspeed(int speed) { this->speed = speed; };


std::string Pokemon::getPokemonStatus() {
	switch (this->status)
	{
	case PokemonStatus::Normal: return "Normal";
	default:
		return "Desconocido";
	}
}

void Pokemon::setPokemonStatus(POKEMONSTATUS status) { this->status = status; }

void Pokemon::loadInitialAttacks(Attack initialAttacks[], int attacksAmount) {


	if (this->attackPtr == nullptr) {

		if (attacksAmount > 4) {
			std::cout << "Un pokemon no puede aprender mas de 4 ataques";
		}
		else if (attacksAmount >= 1 && attacksAmount <= 4) {

			this->attackPtr = new Attack[attacksAmount];

			for (int i = 0; i < attacksAmount; i++) {
				this->attackPtr[i] = initialAttacks[i];
			}

			lengthAttack = attacksAmount;

		}
	}
	else {
		std::cout << "El pokemon ya tiene ataques iniciales! Concidere usar un metodo que agregue ataques" << std::endl;
	};

}


int Pokemon::getLengthAttackArray() { return this->lengthAttack; };

Attack* Pokemon::getAttackArray() {
	return this->attackPtr;
}

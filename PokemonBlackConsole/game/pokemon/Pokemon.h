#pragma once
#include "../gender/EnumGender.h"
#include "../types/EnumTypes.h"
#include "../types/Type.h"
#include "../gender/Gender.h"
#include "EnumPokemonStatus.h"
#include "../attacks/Attack.h"
class Pokemon
{
	int pokemonNumberList = 0;
	std::string name = "";
	Gender gender;
	Type type;
	Attack attackOne;
	Attack attackTwo;
	Attack attackThree;
	Attack attackFour;
	int ps = 0;
	int maxPs = 0;
	int level = 1;
	int physicalAttack = 0;
	int specialAttack = 0;
	int physicalDefense = 0;
	int specialDefense = 0;
	int speed = 0;
	POKEMONSTATUS status;


public:
	Pokemon();
	Pokemon(int pokemonNumberList, std::string name, GENDERES GENDER, TYPES TYPE,int level,
		int ps, int maxPs, int physicalAttack, int specialAttack, int physicalDefense, int specialDefense,
		int speed, POKEMONSTATUS, Attack attackOne);


	void reducePS(int danio);

	int getPokemonNumberList();
	void setPokemonNumberList(int);

	std::string getName();
	void setName(std::string);

	std::string getGender();

	std::string getType();
	void setType(Type);

	int getPs();
	void setPs(int);

	int getMaxPs();
	void setMaxPs(int);

	int getLevel();
	void setLevel(int);

	
	int getPhysicalAttack();
	void setPhysicalAttack(int);

	int getSpecialAttack();
	void setSpecialAttack(int);

	int getPhysicalDefense();
	void setPhysicalDefense(int);

	int getSpecialDefense();
	void setSpecialDefense(int);

	int getSpeed();
	void setspeed(int);


	std::string getPokemonStatus();

	void setPokemonStatus(POKEMONSTATUS);


	Attack getAttackOne() {
		return this->attackOne;
	}

	void setAttackOne(Attack attackOne) {
		 this->attackOne = attackOne;
	}

	Attack getAttackTwo() {
		return this->attackTwo;
	}

	void setAttackTwo(Attack attackTwo) {
		this->attackTwo = attackTwo;
	}

	Attack getAttackThree() {
		return this->attackThree;
	}

	void setAttackThree(Attack attackThree) {
		this->attackThree = attackThree;
	}

	Attack getAttackFour(Attack attackOne) {
		return this->attackFour;
	}

	void setAttackFour(Attack attackFour) {
		this->attackFour = attackFour;
	}


};


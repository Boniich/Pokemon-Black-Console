#pragma once
#include "../gender/EnumGender.h"
#include "../types/EnumTypes.h"
#include "../types/Type.h"
#include "../gender/Gender.h"
#include "EnumPokemonStatus.h"
class Pokemon
{
	int pokemonNumberList = 0;
	std::string name = "";
	Gender gender;
	Type type;
	int ps = 0;
	int maxPs = 0;
	int physicalAttack = 0;
	int specialAttack = 0;
	int physicalDefense = 0;
	int specialDefense = 0;
	int speed = 0;
	POKEMONSTATUS status;


public:
	Pokemon();
	Pokemon(int pokemonNumberList, std::string name, GENDERES GENDER, TYPES TYPE, 
		int ps, int maxPs, int physicalAttack, int specialAttack, int physicalDefense, int specialDefense,
		int speed, POKEMONSTATUS);

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



};


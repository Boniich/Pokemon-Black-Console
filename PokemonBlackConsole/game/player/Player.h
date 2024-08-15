#pragma once

#include "../gender/trainerGender/TrainerGender.h"
#include "../pokemon/Pokemon.h"

class Player
{
	int id;
	std::string name;
	TrainerGender trainerGender;
	Pokemon pokemon[6];
	int money;

public:
	Player(std::string name, TrainerGenderEnum gender);
	std::string getName();
	std::string getGender();
	Pokemon* getPokemon();
	bool changePokemon(int posPokemonOne, int posPokemonTwo);
	void addPokemon(Pokemon pokemon);


};


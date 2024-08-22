#pragma once

#include "../gender/trainerGender/TrainerGender.h"
#include "../pokemon/Pokemon.h"
#include "pokemonTeam/PokemonTeam.h"

class Player
{
	int id;
	std::string name;
	TrainerGender trainerGender;
	PokemonTeam pokemonTeam;
	int money;
	
public:
	Player(std::string name, TrainerGenderEnum gender);
	std::string getName();
	std::string getGender();
	PokemonTeam& getPokemonTeam();


};


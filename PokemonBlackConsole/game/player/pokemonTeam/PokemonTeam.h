#pragma once

#include "../../pokemon/Pokemon.h"

class PokemonTeam
{
	Pokemon pokemon[6];
	int teamSize;

public:
	PokemonTeam();
	Pokemon* getTeam();
	Pokemon& getFirstPokemon();
	bool addPokemonToTeam(Pokemon& pokemon);
	bool changePokemonOrder(int posPokemonOne, int posPokemonTwo);
	bool isTeamFull();
	int getTeamSize();
};


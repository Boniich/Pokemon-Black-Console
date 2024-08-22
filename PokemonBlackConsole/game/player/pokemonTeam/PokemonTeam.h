#pragma once

#include "../../pokemon/Pokemon.h"

class PokemonTeam
{
	Pokemon pokemon[6];
	int teamSize;

private:
		bool isTeamFull();

public:
	PokemonTeam();
	Pokemon* getTeam();
	Pokemon& getFirstPokemon();
	bool addPokemonToTeam(Pokemon& pokemon);
	void changePokemonOrder(const int posPokemonOne, const int posPokemonTwo);
	int getTeamSize();
};


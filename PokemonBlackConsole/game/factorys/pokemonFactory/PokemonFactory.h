#pragma once

#include <iostream>
#include <unordered_map>
#include <stdexcept>
#include "../attackFactory/AttackFactory.h"
#include "../../pokemon/Pokemon.h"

class PokemonFactory
{
	AttackFactory attackFactory;
	std::unordered_map<int, Pokemon>pokemonMap;

public:
	PokemonFactory();
	Pokemon createPokemon(const int pokemonId);
};


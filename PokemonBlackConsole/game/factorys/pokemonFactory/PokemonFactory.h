#pragma once

#include <iostream>
#include <unordered_map>
#include <stdexcept>
#include "../../pokemon/Pokemon.h"

class PokemonFactory
{
	std::unordered_map<int, Pokemon>pokemonMap;

public:
	PokemonFactory();
	Pokemon createPokemon(const int pokemonId);
};


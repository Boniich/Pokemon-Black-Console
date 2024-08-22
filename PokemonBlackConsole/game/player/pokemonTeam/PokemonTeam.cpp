#include "PokemonTeam.h"

PokemonTeam::PokemonTeam() {
	this->teamSize = 0;
};

Pokemon* PokemonTeam::getTeam() { return this->pokemon; };
Pokemon& PokemonTeam::getFirstPokemon() {
	return this->pokemon[0];
};
bool PokemonTeam::addPokemonToTeam(Pokemon& pokemon) {
	if (isTeamFull()) return false;
	this->pokemon[teamSize] = pokemon;
	this->teamSize++;
	return true;
}

bool PokemonTeam::isTeamFull() { return (this->teamSize == 6) ? true : false; }

int PokemonTeam::getTeamSize() { return this->teamSize; }



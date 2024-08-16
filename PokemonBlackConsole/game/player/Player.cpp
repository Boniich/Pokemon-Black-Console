#include "Player.h"

Player::Player(std::string name, TrainerGenderEnum gender) : trainerGender(gender) {
	this->id = 1;
	this->name = name;
	this->money = 0;
}

std::string Player::getName() { return this->name; }
std::string Player::getGender() { return this->trainerGender.getTrainerGender(); }
Pokemon* Player::getPokemon() { return this->pokemon; }
bool Player::changePokemon(int posPokemonOne, int posPokemonTwo) { return false; };
void Player::addPokemon(Pokemon& pokemon) { 
	
		this->pokemon[0] = pokemon;
};
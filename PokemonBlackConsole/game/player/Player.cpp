#include "Player.h"

Player::Player(std::string nombre, TrainerGenderEnum gender) : trainerGender(gender) {

}

std::string Player::getName() { return this->name; }
std::string Player::getGender() { return this->trainerGender.getTrainerGender(); }
Pokemon* Player::getPokemon() { return this->pokemon; }
bool Player::changePokemon(int posPokemonOne, int posPokemonTwo) { return false; };
bool Player::catchPokemon(Pokemon& pokemon) { return false; };
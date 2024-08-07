#include "PokemonFactory.h"

PokemonFactory::PokemonFactory() {
    AttackFactory attackFactory;

    Attack impactrueno = attackFactory.createAttack(1);
    Attack araniazo = attackFactory.createAttack(3);
    Attack ascuas = attackFactory.createAttack(2);
    Attack tackle = attackFactory.createAttack(6);
    Attack mordisco = attackFactory.createAttack(10);

    Attack ataquesPikachu[4] = { impactrueno,araniazo,tackle };
    Attack ataquesCharmander[4] = { mordisco,ascuas,tackle };

    this->pokemonMap[1] = Pokemon(1, "Pikachu", Masculino, Electrico, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);
    this->pokemonMap[2] = Pokemon (2, "Charmander", Masculino, Fuego, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);

    this->pokemonMap[2].loadInitialAttacks(ataquesCharmander, 3);
    this->pokemonMap[1].loadInitialAttacks(ataquesPikachu, 2);
}

Pokemon PokemonFactory::createPokemon(const int pokemonId) {
    try
    {
        if (pokemonMap.find(pokemonId) != pokemonMap.end()) {
            return pokemonMap[pokemonId];
        }

        throw std::runtime_error("El ID del pokemon no fue encontrado");
    }
    catch (const std::exception& e)
    {
        std::cout << "Excepcion: " << e.what() << std::endl;
    }
}
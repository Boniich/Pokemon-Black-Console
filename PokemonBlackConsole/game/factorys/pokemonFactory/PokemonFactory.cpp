#include "PokemonFactory.h"

PokemonFactory::PokemonFactory() {

    this->pokemonMap[1] = Pokemon(1, "Pikachu", Masculino, Electrico, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);
    this->pokemonMap[2] = Pokemon(2, "Charmander", Masculino, Fuego, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);
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
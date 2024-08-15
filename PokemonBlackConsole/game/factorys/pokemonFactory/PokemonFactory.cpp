#include "PokemonFactory.h"

PokemonFactory::PokemonFactory() {

    this->pokemonMap[0] = Pokemon(1, "Bulbasaur", Masculino, Planta, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);
    this->pokemonMap[1] = Pokemon(2, "Ivysaur", Masculino, Planta, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);
    this->pokemonMap[2] = Pokemon(3, "Venusaur", Masculino, Planta, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);

    this->pokemonMap[3] = Pokemon(4, "Charmander", Masculino, Fuego, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);
    this->pokemonMap[4] = Pokemon(5, "Charmeleon", Masculino, Planta, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);
    this->pokemonMap[5] = Pokemon(6, "Charizard", Masculino, Planta, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);

    this->pokemonMap[6] = Pokemon(7, "Squirtle", Femenino, Agua, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);
    this->pokemonMap[7] = Pokemon(8, "Wartortle", Masculino, Planta, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);
    this->pokemonMap[8] = Pokemon(9, "Blastoise", Masculino, Planta, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);

    this->pokemonMap[9] = Pokemon(25, "Pikachu", Masculino, Electrico, 25, 25, 25, 9, 15, 20, 25, 15, PokemonStatus::Normal);
    
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
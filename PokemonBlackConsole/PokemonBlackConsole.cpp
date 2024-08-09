#include <iostream>
#include "game/pokemon/Pokemon.h"
#include "game/attacks/Attack.h"
#include "game/battleSystem/battleSystem.h"
#include "game/factorys/attackFactory/AttackFactory.h"
#include "game/factorys/pokemonFactory/PokemonFactory.h"

using namespace Types;

int main()
{
    PokemonFactory pokemonFactory;
    AttackFactory attackFactory;

    Attack impactrueno = attackFactory.createAttack(1);
    Attack araniazo = attackFactory.createAttack(3);
    Attack ascuas = attackFactory.createAttack(2);
    Attack tackle = attackFactory.createAttack(6);
    Attack mordisco = attackFactory.createAttack(10);

    Attack ataquesPikachu[4] = { impactrueno,araniazo,mordisco ,ascuas };
    Attack ataquesCharmander[1] = { mordisco };
    
    Pokemon charmander = pokemonFactory.createPokemon(2);
    Pokemon pikachu = pokemonFactory.createPokemon(1);

    charmander.getAttackArray().loadInitialAttacks(ataquesCharmander,1);
    pikachu.getAttackArray().loadInitialAttacks(ataquesPikachu, 4);

    //Attack burbuja = attackFactory.createAttack(4);

    //pikachu.getAttackArray().pushAttack(burbuja);

    BattleSystem battleSystem;

    std::cout << "Nombre del pokemon: " << charmander.getName() << std::endl;
    std::cout << "Sexo del pokemon: " << charmander.getGender() << std::endl;
    std::cout << "Tipo del pokemon: " << charmander.getType() << std::endl;
    std::cout << "Nivel del pokemon: " << charmander.getLevel() << std::endl;
    std::cout << "Vida actual del pokemon: " << charmander.getPs() << std::endl;
    std::cout << "Vida maxima del pokemon: " << charmander.getMaxPs() << std::endl;
    std::cout << "Ataque fisico del pokemon: " << charmander.getPhysicalAttack() << std::endl;
    std::cout << "Ataque especial del pokemon: " << charmander.getSpecialAttack() << std::endl;
    std::cout << "Defensa fisica  del pokemon: " << charmander.getPhysicalDefense() << std::endl;
    std::cout << "Defensa magica del pokemon: " << charmander.getSpecialDefense() << std::endl;
    std::cout << "Velocidad del pokemon: " << charmander.getSpeed() << std::endl;
    std::cout << "Estado del pokemon: " << charmander.getPokemonStatus() << std::endl;

    //borrar despues
    for (int i = 0; i < charmander.getAttackArray().getLengthArray(); i++) {
        std::cout << "El nombre del ataque es: " << charmander.getAttackArray().getAttack()[i].getName() << std::endl;
        std::cout << "la dir del ataque es: " << &charmander.getAttackArray().getAttack()[i] << std::endl;
    }


    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Nombre del pokemon: " << pikachu.getName() << std::endl;
    std::cout << "Sexo del pokemon: " << pikachu.getGender() << std::endl;
    std::cout << "Tipo del pokemon: " << pikachu.getType() << std::endl;
    std::cout << "Nivel del pokemon: " << pikachu.getLevel() << std::endl;
    std::cout << "Vida actual del pokemon: " << pikachu.getPs() << std::endl;
    std::cout << "Vida maxima del pokemon: " << pikachu.getMaxPs() << std::endl;
    std::cout << "Ataque fisico del pokemon: " << pikachu.getPhysicalAttack() << std::endl;
    std::cout << "Ataque especial del pokemon: " << pikachu.getSpecialAttack() << std::endl;
    std::cout << "Defensa fisica  del pokemon: " << pikachu.getPhysicalDefense() << std::endl;
    std::cout << "Defensa magica del pokemon: " << pikachu.getSpecialDefense() << std::endl;
    std::cout << "Velocidad del pokemon: " << pikachu.getSpeed() << std::endl;
    std::cout << "Estado del pokemon: " << pikachu.getPokemonStatus() << std::endl;

    //borrar despues
    for (int i = 0; i < pikachu.getAttackArray().getLengthArray(); i++) {
        std::cout << "El nombre del ataque es: " << pikachu.getAttackArray().getAttack()[i].getName() << std::endl;
        std::cout << "la dir del ataque es: " << &pikachu.getAttackArray().getAttack()[i] << std::endl;
    }


    battleSystem.startBattle(pikachu, charmander);

}


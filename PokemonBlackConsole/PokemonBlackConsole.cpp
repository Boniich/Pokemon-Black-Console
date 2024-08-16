#include <iostream>
#include "game/pokemon/Pokemon.h"
#include "game/attacks/Attack.h"
#include "game/battleSystem/battleSystem.h"
#include "game/factorys/attackFactory/AttackFactory.h"
#include "game/factorys/pokemonFactory/PokemonFactory.h"
#include "game/player/Player.h"
#include "game/player/loadPlayer/LoadPlayerView.h"

using namespace Types;

int main()
{

    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "---------- Bienvenido/a a Pokemon Black Console ------------" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    PokemonFactory pokemonFactory;
    AttackFactory attackFactory;
    BattleSystem battleSystem;

    Attack araniazo = attackFactory.createAttack(3);
    Attack ascuas = attackFactory.createAttack(2);
    Attack tackle = attackFactory.createAttack(6);
    Attack mordisco = attackFactory.createAttack(10);

    bool endGame = false;
    bool initialPokemonSelected = false;
    int selectInitialPokemon = 0;
    int opcion = 0;
    Player player = loadPlayerView();
    Pokemon pokemonRival;

    system("cls");

    showPlayerData(player);


    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "------------------- Laboratorio de OAK ---------------------" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;

    Attack ataquesBulbasaur[2] = { tackle,araniazo };
    Attack ataquesSquirtle[2] = { tackle,mordisco };
    Attack ataquesCharmander[2] = { araniazo,ascuas };

    Pokemon bulbasaur = pokemonFactory.createPokemon(0);
    bulbasaur.getAttackArray().loadInitialAttacks(ataquesBulbasaur, 2);

    Pokemon squirtle = pokemonFactory.createPokemon(6);
    squirtle.getAttackArray().loadInitialAttacks(ataquesSquirtle, 2);
   
    Pokemon charmander = pokemonFactory.createPokemon(3);
    charmander.getAttackArray().loadInitialAttacks(ataquesCharmander, 2);
    


    do {
        std::cout << "Necesitas un pokemon para iniciar tu aventura, estos son los 3 iniciales de esta region" << std::endl;


        std::cout << "" << std::endl;

        std::cout << "1- " << bulbasaur.getName() << " - Tipo: " << bulbasaur.getType() << std::endl;
        std::cout << "" << std::endl;
        std::cout << "2- " << squirtle.getName() << " - Tipo: " << squirtle.getType() << std::endl;
        std::cout << "" << std::endl;
        std::cout << "3- " << charmander.getName() << " - Tipo: " << charmander.getType() << std::endl;
        std::cout << "" << std::endl;

        std::cout << "Selecciona uno" << std::endl;
        std::cin >> selectInitialPokemon;

        switch (selectInitialPokemon)
        {
        case 1:
            player.addPokemon(bulbasaur);
            pokemonRival = charmander;
            initialPokemonSelected = true;
            break;
        case 2:
            player.addPokemon(squirtle);
            pokemonRival = bulbasaur;
            initialPokemonSelected = true;
            break;
        case 3:
            player.addPokemon(charmander);
            pokemonRival = squirtle;
            initialPokemonSelected = true;
            break;
        default:
            std::cout << "La opcion no es valida!" << std::endl;
            break;
        }
        system("cls");
        std::cout << "Has obtenido a " << player.getPokemon()->getName()<<std::endl;

    } while (!initialPokemonSelected);
   


    do
    {

        std::cout << "------------------------------------------------------------" << std::endl;
        std::cout << "---------------------- Menu Principal ----------------------" << std::endl;
        std::cout << "------------------------------------------------------------" << std::endl;


        std::cout << "1- Batalla" << std::endl;
        std::cout << "2- Ver equipo pokemon" << std::endl;
        std::cout << "3- Ver tus datos" << std::endl;
        std::cout << "4- Salir" << std::endl;
        std::cout << "Introduce una opcion: ";

        std::cin >> opcion;


        switch (opcion)
        {
        case 1:
            std::cout << "Batalla" << std::endl;
            battleSystem.startBattle(player.getPokemon()[0], pokemonRival);
            break;
        case 2:
            std::cout << "--- Equipo pokemon ---" << std::endl;
            for (int i = 0; i < 1; i++) {
                std::cout << "Nombre del pokemon: "<<player.getPokemon()[i].getName() << std::endl;
            }
            break;
        case 3:
            std::cout << "Ver tus datos" << std::endl;
            break;
        case 4:
            std::cout << "Muchas gracias por jugar pokemon black console! Vuelve pronto!" << std::endl;
            endGame = true;
            break;
        default:
            std::cout << "La opcion ingresada no es valida!";
            break;
        }

    } while (!endGame);


    //PokemonFactory pokemonFactory;
    //AttackFactory attackFactory;

    //Attack impactrueno = attackFactory.createAttack(1);
    //Attack araniazo = attackFactory.createAttack(3);
    //Attack ascuas = attackFactory.createAttack(2);
    //Attack tackle = attackFactory.createAttack(6);
    //Attack mordisco = attackFactory.createAttack(10);

    //Attack ataquesPikachu[4] = { impactrueno,araniazo,mordisco ,ascuas };
    //Attack ataquesCharmander[1] = { mordisco };
    //
    //Pokemon charmander = pokemonFactory.createPokemon(2);
    //Pokemon pikachu = pokemonFactory.createPokemon(1);

    //charmander.getAttackArray().loadInitialAttacks(ataquesCharmander,1);
    //pikachu.getAttackArray().loadInitialAttacks(ataquesPikachu, 4);

    ////Attack burbuja = attackFactory.createAttack(4);

    ////pikachu.getAttackArray().pushAttack(burbuja);

    //BattleSystem battleSystem;

    //std::cout << "Nombre del pokemon: " << charmander.getName() << std::endl;
    //std::cout << "Sexo del pokemon: " << charmander.getGender() << std::endl;
    //std::cout << "Tipo del pokemon: " << charmander.getType() << std::endl;
    //std::cout << "Nivel del pokemon: " << charmander.getLevel() << std::endl;
    //std::cout << "Vida actual del pokemon: " << charmander.getPs() << std::endl;
    //std::cout << "Vida maxima del pokemon: " << charmander.getMaxPs() << std::endl;
    //std::cout << "Ataque fisico del pokemon: " << charmander.getPhysicalAttack() << std::endl;
    //std::cout << "Ataque especial del pokemon: " << charmander.getSpecialAttack() << std::endl;
    //std::cout << "Defensa fisica  del pokemon: " << charmander.getPhysicalDefense() << std::endl;
    //std::cout << "Defensa magica del pokemon: " << charmander.getSpecialDefense() << std::endl;
    //std::cout << "Velocidad del pokemon: " << charmander.getSpeed() << std::endl;
    //std::cout << "Estado del pokemon: " << charmander.getPokemonStatus() << std::endl;

    ////borrar despues
    //for (int i = 0; i < charmander.getAttackArray().getLengthArray(); i++) {
    //    std::cout << "El nombre del ataque es: " << charmander.getAttackArray().getAttack()[i].getName() << std::endl;
    //    std::cout << "la dir del ataque es: " << &charmander.getAttackArray().getAttack()[i] << std::endl;
    //}


    //std::cout << "" << std::endl;
    //std::cout << "" << std::endl;

    //std::cout << "Nombre del pokemon: " << pikachu.getName() << std::endl;
    //std::cout << "Sexo del pokemon: " << pikachu.getGender() << std::endl;
    //std::cout << "Tipo del pokemon: " << pikachu.getType() << std::endl;
    //std::cout << "Nivel del pokemon: " << pikachu.getLevel() << std::endl;
    //std::cout << "Vida actual del pokemon: " << pikachu.getPs() << std::endl;
    //std::cout << "Vida maxima del pokemon: " << pikachu.getMaxPs() << std::endl;
    //std::cout << "Ataque fisico del pokemon: " << pikachu.getPhysicalAttack() << std::endl;
    //std::cout << "Ataque especial del pokemon: " << pikachu.getSpecialAttack() << std::endl;
    //std::cout << "Defensa fisica  del pokemon: " << pikachu.getPhysicalDefense() << std::endl;
    //std::cout << "Defensa magica del pokemon: " << pikachu.getSpecialDefense() << std::endl;
    //std::cout << "Velocidad del pokemon: " << pikachu.getSpeed() << std::endl;
    //std::cout << "Estado del pokemon: " << pikachu.getPokemonStatus() << std::endl;

    ////borrar despues
    //for (int i = 0; i < pikachu.getAttackArray().getLengthArray(); i++) {
    //    std::cout << "El nombre del ataque es: " << pikachu.getAttackArray().getAttack()[i].getName() << std::endl;
    //    std::cout << "la dir del ataque es: " << &pikachu.getAttackArray().getAttack()[i] << std::endl;
    //}


    //battleSystem.startBattle(pikachu, charmander);

}


#include <iostream>
#include "game/pokemon/Pokemon.h"
#include "game/attacks/Attack.h"
#include "game/battleSystem/battleSystem.h"

int main()
{

    Attack impactrueno(1, "Impactrueno", Electrico, Especial, 40, 100, "Impacta con un trueno", 40, 40);
    Attack araniazo(1, "Araniazo", Fuego, Fisico, 40, 100, "Arania", 40, 40);
    Attack lanzallama(1, "lanzallama", Fuego, Fisico, 40, 100, "Arania", 40, 40);
    Attack tackle(1, "tackle", Fuego, Fisico, 40, 100, "Arania", 40, 40);
    Attack tacakle(1, "asa", Fuego, Fisico, 40, 100, "Arania", 40, 40);

    Attack tacakle2(1, "Cola ferrea", Fuego, Fisico, 40, 100, "Arania", 40, 40);
    Attack ascuas(1, "Ascuas", Fuego, Fisico, 40, 100, "Arania", 40, 40);
    Attack grunidio(1, "Grunido", Fuego, Fisico, 40, 100, "Arania", 40, 40);
    Attack vuelo(1, "vuelo", Fuego, Fisico, 40, 100, "Arania", 40, 40);

    Attack ataqueIniciales[4] = { impactrueno,araniazo,lanzallama,tackle};
    Attack ataqueIniciales2[4] = { tacakle2,ascuas,grunidio,vuelo };

    Pokemon pikachu(1, "Pikachu", Masculino, Electrico, 25, 25, 25, 9, 15, 20, 25, 15, Normal);
    Pokemon charmander(2, "Charmander", Masculino, Fuego, 25, 25, 25, 9, 15, 20, 25, 15, Normal);
    
    Pokemon ratatta(7, "Ratatta", Femenino, Fuego, 25, 25, 9, 9, 15, 25, 25, 10, Normal);
    charmander.loadInitialAttacks(ataqueIniciales2, 4);
    ratatta.loadInitialAttacks(ataqueIniciales,4);
    
    //ratatta.loadInitialAttacks(ataqueIniciales2, 1);
    

    BattleSystem battleSystem;

    std::cout << "La dir del ataque impactrueno es: " << &ataqueIniciales[0]<<std::endl;
    std::cout << "La dir del ataque araniazo es: " << &ataqueIniciales[1] << std::endl;

    //std::cout << "Nombre del pokemon: " << pikachu.getName() << std::endl;
    //std::cout << "Sexo del pokemon: " << pikachu.getGender() << std::endl;
    //std::cout << "Tipo del pokemon: " << pikachu.getType() << std::endl;
    //std::cout << "Vida actual del pokemon: " << pikachu.getPs() << std::endl;
    //std::cout << "Vida maxima del pokemon: " << pikachu.getMaxPs() << std::endl;
    //std::cout << "Ataque fisico del pokemon: " << pikachu.getPhysicalAttack() << std::endl;
    //std::cout << "Ataque especial del pokemon: " << pikachu.getSpecialAttack() << std::endl;
    //std::cout << "Defensa fisica  del pokemon: " << pikachu.getPhysicalDefense() << std::endl;
    //std::cout << "Defensa magica del pokemon: " << pikachu.getSpecialDefense() << std::endl;
    //std::cout << "Velocidad del pokemon: " << pikachu.getSpeed() << std::endl;
    //std::cout << "Estado del pokemon: " << pikachu.getPokemonStatus() << std::endl;

    //std::cout << "Primer ataque: " << pikachu.getAttackOne().getName();

    //std::cout << "" << std::endl;
    //std::cout << "" << std::endl;

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


    for (int i = 0; i < charmander.getLengthAttackArray(); i++) {
        std::cout << "El nombre del ataque es: " << charmander.getAttackArray()[i].getName() << std::endl;
        std::cout << "la dir del ataque es: " << &charmander.getAttackArray()[i] << std::endl;
    }


    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    //std::cout << "Numero del ataque: " << impactrueno.getAttackId() << std::endl;
    //std::cout << "Nombre del ataque: " << impactrueno.getName() << std::endl;
    //std::cout << "Tipo del ataque: " << impactrueno.getType() << std::endl;
    //std::cout << "Clase del ataque: " << impactrueno.getClassAttack() << std::endl;
    //std::cout << "Potencia: " << impactrueno.getPotency() << std::endl;
    //std::cout << "Precision: " << impactrueno.getPrecision() << std::endl;
    //std::cout << "Descripcion: " << impactrueno.getDescripcion() << std::endl;
    //std::cout << "Puntos de poderes actuales: " << impactrueno.getPointOfPower() << std::endl;
    //std::cout << "Puntos de poderes maximos: " << impactrueno.getMaxPointOfPower() << std::endl;

    //battleSystem.startBattle(pikachu, charmander);
    

    //std::cout << "Vida actual del pokemon: " << charmander.getPs() << std::endl;

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Nombre del pokemon: " << ratatta.getName() << std::endl;
    std::cout << "Sexo del pokemon: " << ratatta.getGender() << std::endl;
    std::cout << "Tipo del pokemon: " << ratatta.getType() << std::endl;
    std::cout << "Nivel del pokemon: " << ratatta.getLevel() << std::endl;
    std::cout << "Vida actual del pokemon: " << ratatta.getPs() << std::endl;
    std::cout << "Vida maxima del pokemon: " << ratatta.getMaxPs() << std::endl;
    std::cout << "Ataque fisico del pokemon: " << ratatta.getPhysicalAttack() << std::endl;
    std::cout << "Ataque especial del pokemon: " << ratatta.getSpecialAttack() << std::endl;
    std::cout << "Defensa fisica  del pokemon: " << ratatta.getPhysicalDefense() << std::endl;
    std::cout << "Defensa magica del pokemon: " << ratatta.getSpecialDefense() << std::endl;
    std::cout << "Velocidad del pokemon: " << ratatta.getSpeed() << std::endl;
    std::cout << "Estado del pokemon: " << ratatta.getPokemonStatus() << std::endl;


 //for (int i = 0; i < 2; i++) {
 //    std::cout << "El nombre del ataque es: " << ratatta.getAttacks()[i].getName() <<std::endl;
 //    std::cout << "la dir del ataque es: " << &ratatta.getAttacks()[i] << std::endl;
 //}
    //Attack* attack = ratatta.getAttackArray();
    //std::cout << "Attack dir" << attack++ << std::endl;

    for (int i = 0; i < ratatta.getLengthAttackArray(); i++) {
        std::cout << "El nombre del ataque es: " << ratatta.getAttackArray()[i].getName() << std::endl;
        std::cout << "la dir del ataque es: " << &ratatta.getAttackArray()[i] << std::endl;
    }


   /* std::cout << ratatta.getAttacks().max_size();
    for (int i = 0; i < ratatta.getAttacks().size(); i++) {
        std::cout << "El nombre del ataque es: " << ratatta.getAttacks()[i].getName() <<std::endl;
    }*/

    battleSystem.startBattle(ratatta, charmander);

}


#include <iostream>
#include "game/pokemon/Pokemon.h"
#include "game/attacks/Attack.h"
#include "game/battleSystem/battleSystem.h"

int main()
{

    Attack impactrueno(1, "Impactrueno", Electrico, Especial, 40, 100, "Impacta con un trueno", 40, 40);
    Attack araniazo(1, "Araniazo", Fuego, Fisico, 40, 100, "Arania", 40, 40);


    Pokemon pikachu(1, "Pikachu", Masculino, Electrico, 25, 25, 25, 9, 15, 20, 25, 15, Normal, impactrueno);
    Pokemon charmander(2, "Charmander", Masculino, Fuego, 25, 25, 25, 9, 15, 20, 25, 15, Normal, araniazo);

    BattleSystem battleSystem;


    std::cout << "Nombre del pokemon: " << pikachu.getName() << std::endl;
    std::cout << "Sexo del pokemon: " << pikachu.getGender() << std::endl;
    std::cout << "Tipo del pokemon: " << pikachu.getType() << std::endl;
    std::cout << "Vida actual del pokemon: " << pikachu.getPs() << std::endl;
    std::cout << "Vida maxima del pokemon: " << pikachu.getMaxPs() << std::endl;
    std::cout << "Ataque fisico del pokemon: " << pikachu.getPhysicalAttack() << std::endl;
    std::cout << "Ataque especial del pokemon: " << pikachu.getSpecialAttack() << std::endl;
    std::cout << "Defensa fisica  del pokemon: " << pikachu.getPhysicalDefense() << std::endl;
    std::cout << "Defensa magica del pokemon: " << pikachu.getSpecialDefense() << std::endl;
    std::cout << "Velocidad del pokemon: " << pikachu.getSpeed() << std::endl;
    std::cout << "Estado del pokemon: " << pikachu.getPokemonStatus() << std::endl;

    std::cout << "Primer ataque: " << pikachu.getAttackOne().getName();

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Nombre del pokemon: " << charmander.getName() << std::endl;
    std::cout << "Sexo del pokemon: " << charmander.getGender() << std::endl;
    std::cout << "Tipo del pokemon: " << charmander.getType() << std::endl;
    std::cout << "Vida actual del pokemon: " << charmander.getPs() << std::endl;
    std::cout << "Vida maxima del pokemon: " << charmander.getMaxPs() << std::endl;
    std::cout << "Ataque fisico del pokemon: " << charmander.getPhysicalAttack() << std::endl;
    std::cout << "Ataque especial del pokemon: " << charmander.getSpecialAttack() << std::endl;
    std::cout << "Defensa fisica  del pokemon: " << charmander.getPhysicalDefense() << std::endl;
    std::cout << "Defensa magica del pokemon: " << charmander.getSpecialDefense() << std::endl;
    std::cout << "Velocidad del pokemon: " << charmander.getSpeed() << std::endl;
    std::cout << "Estado del pokemon: " << charmander.getPokemonStatus() << std::endl;


    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Numero del ataque: " << impactrueno.getAttackId() << std::endl;
    std::cout << "Nombre del ataque: " << impactrueno.getName() << std::endl;
    std::cout << "Tipo del ataque: " << impactrueno.getType() << std::endl;
    std::cout << "Clase del ataque: " << impactrueno.getClassAttack() << std::endl;
    std::cout << "Potencia: " << impactrueno.getPotency() << std::endl;
    std::cout << "Precision: " << impactrueno.getPrecision() << std::endl;
    std::cout << "Descripcion: " << impactrueno.getDescripcion() << std::endl;
    std::cout << "Puntos de poderes actuales: " << impactrueno.getPointOfPower() << std::endl;
    std::cout << "Puntos de poderes maximos: " << impactrueno.getMaxPointOfPower() << std::endl;

    battleSystem.startBattle(pikachu, charmander);
    

    //std::cout << "Vida actual del pokemon: " << charmander.getPs() << std::endl;

}


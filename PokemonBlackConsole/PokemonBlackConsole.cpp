#include <iostream>
#include "game/pokemon/Pokemon.h"

int main()
{

    Pokemon pikachu(1, "Pikachu", Masculino, Electrico, 25, 25, 9, 15, 20, 25, 15, Normal);


    std::cout << "Nombre del pokemon: " << pikachu.getName()<<std::endl;
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
}


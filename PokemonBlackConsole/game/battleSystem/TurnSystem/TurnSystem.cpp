#include "TurnSystem.h"

void TurnSystem::myTurn(Pokemon& attacker, Pokemon& defender) {

	int opcion = 0;
	bool endTurn = false;
	
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "---------- Turno del pokemon aliado ------------" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	do {

		std::cout << attacker.getName() << " (Aliado) PS: " << attacker.getPs() << std::endl;
		std::cout << defender.getName() << " (Enemigo) PS: " << defender.getPs() << std::endl;

		std::cout << "" << std::endl;
		std::cout << "" << std::endl;

		std::cout << "---- Ataques ----" << std::endl;

		std::cout << "1- " << attacker.getAttackOne().getName() << std::endl;
		std::cout << "2- " << std::endl;
		std::cout << "3- " << std::endl;
		std::cout << "4- " << std::endl;

		std::cout << "Introduce una opcion: " << std::endl;

		std::cin >> opcion;

		switch (opcion)
		{
		case 1:
			//makeDamage(attacker, defender, attack);
			endTurn = true;
		case 2:
		case 3:
		case 4:

		default:
			std::cout << "Opcion no valida! Vuelva a seleccionar una opcion. " << std::endl;
			break;
		}



	} while (!endTurn);

	



}

void TurnSystem::rivalTurn(Pokemon& attacker, Pokemon& defeder) {

}
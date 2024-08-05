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

		for (int i = 0; i < attacker.getLengthAttackArray(); i++) {
			std::cout << (i+1)<<"- " << attacker.getAttackArray()[i].getName() << std::endl;
		}

		std::cout << "Introduce una opcion: " << std::endl;
		std::cin >> opcion;


		if (opcion <= 0 || opcion > attacker.getLengthAttackArray()) {

			std::cout << "Opcion no valida! Vuelva a seleccionar una opcion. " << std::endl;
		}
		else {
			battle.makeDamage(attacker, defender, attacker.getAttackArray()[opcion - 1]);
			endTurn = true;
		}

	} while (!endTurn);

	



}

void TurnSystem::rivalTurn(Pokemon& attacker, Pokemon& defender) {
	int rango_bajo = 1;
	int rango_alto = attacker.getLengthAttackArray();

	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "---------- Turno del pokemon rival ------------" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;


	std::cout << defender.getName() << " (Aliado) PS: " << defender.getPs() << std::endl;
	std::cout << attacker.getName() << " (Enemigo) PS: " << attacker.getPs() << std::endl;

	int opcion = rango_bajo + std::rand() % (rango_alto - rango_bajo + 1);

	if (opcion <= 0 || opcion > attacker.getLengthAttackArray()) {

		std::cout << "Ups! Algo salio mal al atacar! Consulte con su programador de confianza" << std::endl;
	}
	else {
		battle.makeDamage(attacker, defender, attacker.getAttackArray()[opcion - 1]);
	}

}
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

		//std::cout << "1- " << attacker.getAttackOne().getName() << std::endl;
		//std::cout << "2- " << std::endl;
		//std::cout << "3- " << std::endl;
		//std::cout << "4- " << std::endl;

		std::cout << "Introduce una opcion: " << std::endl;

		std::cin >> opcion;

		switch (opcion)
		{
		case 1:
			battle.makeDamage(attacker, defender, attacker.getAttackArray()[opcion-1]);
			endTurn = true;
			break;
		case 2:
			battle.makeDamage(attacker, defender, attacker.getAttackArray()[opcion-1]);
			endTurn = true;
			break;
		case 3:
			battle.makeDamage(attacker, defender, attacker.getAttackArray()[opcion-1]);
			endTurn = true;
			break;
		case 4:
			battle.makeDamage(attacker, defender, attacker.getAttackArray()[opcion-1]);
			endTurn = true;
			break;

		default:
			std::cout << "Opcion no valida! Vuelva a seleccionar una opcion. " << std::endl;
			break;
		}



	} while (!endTurn);

	



}

void TurnSystem::rivalTurn(Pokemon& attacker, Pokemon& defender) {
	int rango_bajo = 1;
	int rango_alto = attacker.getLengthAttackArray();
	std::cout << "El pokemon " << attacker.getName() << " tene " << rango_alto <<" ataques"<<std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "---------- Turno del pokemon rival ------------" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;

	Attack* attack = attacker.getAttackArray();
	std::cout << attack[0].getAttackId();


	std::cout << "" << std::endl;
	std::cout << "" << std::endl;



	std::cout << defender.getName() << " (Aliado) PS: " << defender.getPs() << std::endl;
	std::cout << attacker.getName() << " (Enemigo) PS: " << attacker.getPs() << std::endl;

	for (int i = 0; i < attacker.getLengthAttackArray(); i++) {
		std::cout << (i + 1) << "- " << (attacker.getAttackArray()[i]).getName() << std::endl;
	}

	int opcion = rango_bajo + std::rand() % (rango_alto - rango_bajo + 1);

	switch (opcion)
	{
	case 1:
		battle.makeDamage(attacker, defender, attacker.getAttackArray()[opcion - 1]);
		break;
	case 2:
		battle.makeDamage(attacker, defender, attacker.getAttackArray()[opcion-1]);
		break;
	case 3:
		battle.makeDamage(attacker, defender, attacker.getAttackArray()[opcion-1]);
		break;
	case 4:
		battle.makeDamage(attacker, defender, attacker.getAttackArray()[opcion-1]);
		break;
	default:
		std::cout << "Ups! Algo salio mal al attackar! Consulte con su programador de confianza"<<std::endl;
		break;
	}


}
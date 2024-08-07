#include "AttackFactory.h"

using namespace Types;

AttackFactory::AttackFactory() {

	//impactrueno
	// ascuas
	// araniazo
	// burbuja
	// lanzallamas
	// tackle
	// latigo cepa
	// pistola de agua
	// Ataque rapido
	// Bite
	this->attackMap[1] = Attack(1,"Impactrueno",Electrico,Especial,40,100,"Crea un impatrueno",30,30);
	this->attackMap[2] = Attack(2, "Ascuas", Fuego, Especial, 40, 100, "Tira unas llamatitas", 25, 25);
	this->attackMap[3] = Attack(3, "Araniazo", Normal, Fisico, 40, 100, "Te deja un aranizo", 35, 35);
	this->attackMap[4] = Attack(4, "Burbujas", Agua, Especial, 40, 100, "Tira unas burbujas", 30, 30);
	this->attackMap[5] = Attack(5, "Lanzallamas", Fuego, Especial, 90, 100, "Tira una llamarota", 15, 15);
	this->attackMap[6] = Attack(6, "Tackle", Normal, Especial, 40, 100, "Crea un impatrueno", 30, 30);
	this->attackMap[7] = Attack(7, "Latigo cepa", Planta, Especial, 40, 100, "Crea un impatrueno", 30, 30);
	this->attackMap[8] = Attack(8, "Pisto de agua", Agua, Especial, 40, 100, "Tira un chorro de agua", 25, 25);
	this->attackMap[9] = Attack(9, "Ataque Rapido", Normal, Fisico, 40, 100, "Te pago 5 veces antes que caigas", 30, 30);
	this->attackMap[10] = Attack(10, "Mordisco", Normal, Fisico, 60, 100, "Te mordisquea todo", 60, 100);
}

Attack AttackFactory::createAttack(const int attackId) {
	
	try
	{
		if (attackMap.find(attackId) != attackMap.end()) {
			return attackMap[attackId];
		}

		throw std::runtime_error("El ID del ataque no fue encontrado");
	}
	catch (const std::exception& e)
	{
		std::cout << "Excepcion: "<< e.what()<<std::endl;
	}

	
}


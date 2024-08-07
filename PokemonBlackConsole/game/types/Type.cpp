#include "Type.h"

Type::Type() {};

Type::Type(TYPES TYPE) {
	this->_TYPE = TYPE;
}

std::string Type::getType() {
	switch (this->_TYPE)
	{
	case Fuego: return "Fuego";
	case Agua: return "Agua";
	case Electrico: return "Electrico";
	case Normal: return "Normal";
	case Planta: return "Planta";
	case Fantasma: return "Fantasma";
	case Hielo: return "Hielo";
	case Bicho: return "Bicho";
	case Roca: return "Roca";
	case Dragon: return "Dragon";
	case Lucha: return "Lucha";
	case Tierra: return "Tierra";
	case Veneno: return "Veneno";
	case Volador: return "Volador";
	case Psiquico: return "Psiquico";
	default:
		"No pertenece a ningun tipo definido";
		break;
	}
}

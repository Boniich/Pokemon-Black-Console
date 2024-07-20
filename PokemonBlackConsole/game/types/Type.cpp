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
	default:
		"No pertenece a ningun tipo definido";
		break;
	}
}

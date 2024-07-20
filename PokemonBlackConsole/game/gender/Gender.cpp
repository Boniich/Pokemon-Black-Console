#include "Gender.h"

Gender::Gender() {};
Gender::Gender(GENDERES GENDER) {
	this->_GENDER = GENDER;
}

std::string Gender::getGender() {
	switch (this->_GENDER)
	{
	case Masculino: return "Masculino";
	case Femenino: return "Femenino";

	default:
		return "Desconocido";
	}
}
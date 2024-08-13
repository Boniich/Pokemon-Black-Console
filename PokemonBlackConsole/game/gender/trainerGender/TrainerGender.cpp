#include "TrainerGender.h"
TrainerGender::TrainerGender() {};
TrainerGender::TrainerGender(TrainerGenderEnum trainerGender) {
	this->_trainerGenderEnum = trainerGender;
}

std::string TrainerGender::getTrainerGender() {
	switch (this->_trainerGenderEnum)
	{
	case Mujer: return "Mujer";
	case Hombre: return "Hombre";

	default:
		return "Desconocido";
	}
}
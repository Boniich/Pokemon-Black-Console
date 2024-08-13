#pragma once
#include <string>
enum TrainerGenderEnum { Mujer, Hombre };


class TrainerGender
{

	TrainerGenderEnum _trainerGenderEnum;

public:

	TrainerGender();
	TrainerGender(TrainerGenderEnum);

	std::string getTrainerGender();
};


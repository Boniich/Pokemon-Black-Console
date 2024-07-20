#pragma once
#include "EnumGender.h"
#include <string>
class Gender
{
	GENDERES _GENDER;

public:
	Gender();
	Gender(GENDERES);

	std::string getGender();

};


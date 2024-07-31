#pragma once

#include "../types/Type.h"
#include "enumAttacks.h"

class Attack
{
	int _attackId;
	std::string _name;
	Type _type;
	CLASSATTACKS _classAttack;
	int _potency;
	int _precision;
	std::string _descripcion;
	int _pointOfPower;
	int _maxPointOfPower;


public:

	Attack();

	Attack(int attackId, std::string name, TYPES TYPES, CLASSATTACKS classAttack, int potency, int precision, std::string descripcion
		, int pointOfPower, int maxPointOfPower);


	int getAttackId();

	std::string getName();
	void setName(std::string);


	std::string getType();

	std::string getClassAttack();

	int getPotency();
	void setPotency(int);

	int getPrecision();
	void setPrecision(int);

	std::string getDescripcion();
	void setDescripcion(std::string);
	
	int getPointOfPower();
	void setPointOfPower(int);

	int getMaxPointOfPower();
	void setMaxPointOfPower(int);
	
};


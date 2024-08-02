#include "Attack.h"
#include <iostream>

Attack::Attack() {};

Attack::Attack(int attackId, std::string name, TYPES TYPES, CLASSATTACKS classAttack, int potency, int precision, std::string descripcion
	, int pointOfPower, int maxPointOfPower):_type(TYPES) {

	this->_attackId = attackId;
	this->_name = name;
	this->_classAttack = classAttack;
	this->_potency = potency;
	this->_precision = precision;
	this->_descripcion = descripcion;
	this->_pointOfPower = pointOfPower;
	this->_maxPointOfPower = maxPointOfPower;

}


int Attack::getAttackId() {
	return this->_attackId;
}


std::string Attack::getName() {
	return this->_name;
}
void Attack::setName(std::string name) {
	this->_name = name;
}


std::string Attack::getType()
{
	return this->_type.getType();
}

std::string Attack::getClassAttack()
{
	switch (this->_classAttack)
	{
	case Fisico: return "Fisico";
	case Especial: return "Especial";
	case Estado: return "Estado";
	default:
		return "Clase de ataque desconocida";
	}
}

int Attack::getPotency() {
	return this->_potency;
}
void Attack::setPotency(int potency)
{
	this->_potency = potency;
}

int Attack::getPrecision() { return this->_precision; };
void Attack::setPrecision(int precision) { this->_precision = precision; };

std::string Attack::getDescripcion() { return this->_descripcion; }
void Attack::setDescripcion(std::string descripcion) { this->_descripcion = descripcion; }

int Attack::getPointOfPower() { return this->_pointOfPower; };
void Attack::setPointOfPower(int pointOfPower) {this->_pointOfPower = pointOfPower; }

int Attack::getMaxPointOfPower() { return this->_maxPointOfPower; }
void Attack::setMaxPointOfPower(int maxPointOfPower) { this->_maxPointOfPower = _maxPointOfPower; }

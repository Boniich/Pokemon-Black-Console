#pragma once

#include <unordered_map>
#include <stdexcept>
#include <iostream>
#include "../../attacks/Attack.h"

class AttackFactory
{

	std::unordered_map<int, Attack>attackMap;

public:
	AttackFactory();
	Attack createAttack(const int attackId);

};


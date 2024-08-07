#pragma once
#include "EnumTypes.h"
#include <string>

using namespace Types;

class Type
{
	TYPES _TYPE;

public:
	Type();
	Type(TYPES);

public: 
	std::string getType();
};


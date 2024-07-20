#pragma once
#include "EnumTypes.h"
#include <string>
class Type
{
	TYPES _TYPE;

public:
	Type();
	Type(TYPES);

public: 
	std::string getType();
};


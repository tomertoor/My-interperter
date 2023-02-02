#include "Boolean.h"

Boolean::Boolean(bool value)
{
}

Boolean::~Boolean()
{
}

bool Boolean::isPrintable() const
{
	return true;
}

std::string Boolean::toString() const
{
	return std::to_string(this->value);
}

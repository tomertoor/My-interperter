#include "Type.h"

Type::Type()
{
}

Type::~Type()
{
}

bool Type::isTemp() const
{
	return this->_isTemp;
}

void Type::setTemp(const bool& isTemp)
{
	this->_isTemp = isTemp;
}

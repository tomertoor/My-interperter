#pragma once

#include "Type.h"

class Void : public Type
{
public:
	Void();
	~Void();

	virtual bool isPrintable() const;
	virtual std::string toString() const;

};
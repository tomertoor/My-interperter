#pragma once

#include "Type.h"

class Boolean : public Type
{
public:
	Boolean(bool value);
	~Boolean();

	virtual bool isPrintable() const;
	virtual std::string toString() const;


private:
	bool value;
};
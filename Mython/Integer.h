#pragma once
#include "Type.h"

class Integer : public Type
{
public:
	Integer(int value);
	~Integer();
	virtual bool isPrintable() const;
	virtual std::string toString() const;
private:
	int value;
};
#pragma once

#include <iostream>
#include <string>

class Type
{
public:

	Type();
	virtual ~Type();

	bool isTemp() const;
	void setTemp(const bool& isTemp);

	virtual bool isPrintable() const = 0;
	virtual std::string toString() const = 0;

private:
	bool _isTemp = false;
};

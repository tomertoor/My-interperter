#pragma once
#include "InterpreterException.h"
#include "Type.h"
#include "Helper.h"
#include <string>
#include <unordered_map>
#include <iostream>
#include <sstream>
#include "IndentationException.h"

class Parser
{
public:
	static Type* parseString(std::string str);

private:

};

#pragma once
#include <string>
#include "config.h"

class Triangle
{
public:
    Triangle();
	void setValue(const int tag, const unsigned int &value);

	unsigned int getSide1() const;
	unsigned int getSide2() const;
	unsigned int getSide3() const;

	char* getType() const;

private:
	unsigned int sides_[3];
};

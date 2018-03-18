#include <string>
#include "Triangle.h"
#include "config.h"

Triangle::Triangle()
{
    sides_[0] = sides_[1] = sides_[2] = 0;
}

void Triangle::setValue(const int tag, const unsigned int &value)
{
	sides_[tag-1] = value;
}

unsigned int Triangle::getSide1() const
{
	return sides_[0];
}

unsigned int Triangle::getSide2() const
{
	return sides_[1];
}

unsigned int Triangle::getSide3() const
{
	return sides_[2];
}

char* Triangle::getType() const
{
	if ( sides_[0] >= sides_[1] + sides_[2] ||
		 sides_[1] >= sides_[0] + sides_[2] ||
		 sides_[2] >= sides_[0] + sides_[1]
	   ) {
		return STR_NOT_EXIST;
	}

	if (sides_[0] == sides_[1]) {
		if (sides_[0] == sides_[2]) {
			return STR_EQUILATERAL_TRIANGLE;
		}
		return STR_ISOSCELES_TRIANGLE;
	}
	else if (sides_[0] == sides_[2]) {
		return STR_ISOSCELES_TRIANGLE;
	}
	else if (sides_[1] == sides_[2]) {
		return STR_ISOSCELES_TRIANGLE;
	}

	return STR_SCALENE_TRIANGLE;
}



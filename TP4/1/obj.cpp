#include "obj.hpp"

int Generator::operator () ()
{
	int ret = val * mult;
	//int random_integer = rand() % 10;
	//mult += random_integer; 
	++mult;
	return ret;
}

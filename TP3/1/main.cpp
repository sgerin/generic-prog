#include "obj.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	srand((unsigned)time(0)); 
	Objet obj(2);
	for(int i=0; i<10; ++i)
	{
		std::cout << obj() << std::endl;
	}

}
#include <stdlib.h>
#include <time.h>

class Generator
{
	public : 
		Generator(int i=1.0) : val(i) {mult = 1;} 
		int operator ()();
	private :
		int val;
		int mult;
};
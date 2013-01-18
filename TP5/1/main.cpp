#include <iostream>
#include "tab.hpp"

int main(int argc, char** argv)
{
	int a = 100;
	char* b = new char[10]();
	for(int i = 0; i<10; ++i)
	{
		b[i] = 'a'+i;
	}
	Tab<float> c(a);
	Tab<char> d(b, 10);
	d.ajoute(a);
	std::cout << c.display();
	std::cout << d.display();
	return 0;
}
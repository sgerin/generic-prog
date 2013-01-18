#include <iostream>
#include "string.hpp"

int main(int argc, char **argv)
{
	String s;
	s.display();
	std::cout << std::endl;
	s = "Connard";
	s.display();

	String a("Test");
	a.display();
	String b;
	b = a+s;
	b.display();
	a.display();
}
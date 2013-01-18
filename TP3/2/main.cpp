#include <iostream>
#include "template.hpp"

int main(int argc, char** argv)
{
	int c = 8;
	int d = 9;
	int i=min(d,c);
	std::cout << i << std::endl;
	int j=2;
	int k=3;
	swap(j,k);
	std::cout << j << " " << k << std::endl;
	std::string a, b;
	a += "blalblblbe";
	b += "zzjioja";
	std::cout << min(a, b) << std::endl;
}
#include "obj.hpp"
#include <deque>
#include <iostream>
#include <iterator>
#include <vector>

int main(int argc, char** argv)
{
	//Generator obj(4);

	std::deque<int> mydeque(5);
	std::generate(mydeque.begin(), mydeque.end(), Generator(4));

	std::ostream_iterator<int> out_it (std::cout, "; ");
    copy (mydeque.begin(), mydeque.end(), out_it);
    std::cout << std::endl;

    std::vector<int> s1(5);
    copy(mydeque.begin(), mydeque.end(), s1.begin());
    copy (s1.begin(), s1.end(), out_it);
    std::cout << std::endl;

    mydeque.clear();

    std::vector<int> s2(10);
    std::generate(s2.begin(), s2.end(), Generator(2));
    copy (s2.begin(), s2.end(), out_it);
    std::cout << std::endl;

    std::vector<int> s3;
    //generate_n 
    std::back_insert_iterator<std::vector<int> > it (s3);
    generate_n(it, 6, Generator(3));

    copy (s3.begin(), s3.end(), out_it);
    std::cout << std::endl;

    std::cout << "s1 contenu dans s2 : " << (includes(s1.begin(), s1.end(), s2.begin(), s2.end()) ? "true" : "false") << std::endl;

	return 0;
}
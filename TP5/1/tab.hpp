#ifndef TAB_H
#define TAB_H

#include <iostream>
#include <sstream>



template<typename T>
class Tab
{
public:
	Tab(T elem);
	Tab(T* a, int s);
	Tab(const Tab& i);
	const T & operator[](int i) const;
	std::string display();
	void ajoute(T elem);
	void ajoute(T*a, int s);
	int getSize() const; 

private:
	int size;
	T* array;
};


template<typename T> 
Tab<T>::Tab(T elem)
{
	size = 1;
	array = new T[size]();
	array[0] = elem;
}


template<typename T> 
Tab<T>::Tab(T* a, int s)
{
	size = s;
	array = new T[size]();
	for(int i=0; i<size; ++i)
		array[i] = a[i];
}

template<typename T>
Tab<T>::Tab (const Tab& a)
{
	size = a.getSize();
	array = new T[size]();
	for(int i=0; i<size; ++i)
		array[i] = a[i];
}

template<typename T> 
std::string Tab<T>::display()
{
	std::string s = "Array contains ";
	std::stringstream ss;
	for(int i=0; i<size; ++i)
	{
		ss << array[i];
		s += ss.str();
		s += " ";
		ss.str("");
		ss.clear();
	}
	s += '\n';
	return s;
}

template<typename T>
void Tab<T>::ajoute(T elem)
{
	Tab tmp(*this);
	delete[] array;
	++size;
	array = new T[size]();
	for(int i=0; i<tmp.getSize(); ++i)
		array[i] = tmp[i];
	array[size-1] = elem;
}

template<typename T>
void Tab<T>::ajoute(T* a, int s)
{
	Tab tmp(*this);
	delete[] array;
	size += s;
	array = new T[size]();
	for(int i=0; i<tmp.getSize(); ++i)
		array[i] = tmp[i];
	for(int i= tmp.getSize(); i< size; ++i)
		array[i] = a[i];
}


template<typename T>
int Tab<T>::getSize() const
{
	return size;
}

template<typename T>
const T & Tab<T>::operator[](int i) const
{
	if(i >= 0 && i < size)
		return array[i];
	else
	{
		std::cout << "Index out of bounds" << std::endl;
		exit(1);
	}
}


/*template<>
std::string& min<std::string>(std::string& s, std::string& s2) 
{  
	if(s.compare(s2) < 0)
	{
		return s;
	}
	else
	{
		return s2;
	}
}


template<typename T> 
T swap(T& e1, T& e2)
{
	T temp;
	temp = e1;
	e1 = e2; 
	e2 = temp;
}


template<typename T, int size>
void sort(T array[])
{
	
}*/

#endif
#ifndef TEMP_H
#define TEMP_H

template<typename T> 
T& min(T& e1, T& e2)
{
	return (e1<e2) ? e1 :e2;
}

template<>
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
	
}

#endif
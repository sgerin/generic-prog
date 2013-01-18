#include "string.hpp"

String::String()
{
	size = 0;
	string = new char[20]();
}

String::String(const String & s)
{
	size = s.size;
	string = new char[size]();
	strcpy(string, s.string);
}

String::String(const std::string & s)
{
	const char *cstr = s.c_str();
	size = strlen(cstr);
	string = new char[size]();
	strcpy(string, cstr);
}


String::String(char c)
{
	size = 2;
	string = new char[size]();
	string[0] = c;
	string[1] = '\0';
}

String::String(char* str)
{
	size = strlen(str);
	string = new char[size]();
	strcpy(string, str);
}

String::String(const char* str)
{
	size = strlen(str);
	string = new char[size]();
	strcpy(string, str);
}


const String & String::operator=(const String & s)
{
	size = s.size;
	delete[] string;
	string = new char[size]();
	strcpy(string, s.string);
	return *this;
}

const String & String::operator=(const std::string & s)
{
	const char *cstr = s.c_str();
	size = strlen(cstr);
	delete[] string;
	string = new char[size]();
	strcpy(string, cstr);
	return *this;
}


const String & String::operator=(const char* s)
{
	size = strlen(s);
	delete[] string;
	string = new char[size]();
	strcpy(string, s);
	return *this;
}

const String & String::operator=(const char & c)
{
	delete[] string;
	size = 2;
	string = new char[size]();
	string[0] = c;
	string[1] = '\0';
	return *this;
}


const String & String::operator+(const String & s)
{	
	char* tmp = new char[size]();
	strcpy(tmp, string);
	size += s.size+1;
	delete[] string;
	string = new char[size]();
	strcpy(string, tmp);
	strcpy(string+strlen(tmp), s.string);
	delete[] tmp;
	return *this;
}

const String & String::operator+(const std::string & s)
{
	char* tmp = new char[size]();
	strcpy(tmp, string);
	size += s.size()+1;
	delete[] string;
	string = new char[size]();
	strcpy(string, tmp);
	strcpy(string+strlen(tmp), s.c_str());
	delete[] tmp;
	return *this;
}
const String & String::operator+(const char* s)
{
	char* tmp = new char[size]();
	strcpy(tmp, string);
	size += strlen(s)+1;
	delete[] string;
	string = new char[size]();
	strcpy(string, tmp);
	strcpy(string+strlen(tmp), s);
	delete[] tmp;
	return *this;
}
const String & String::operator+(const char & c)
{
	char* tmp = new char[size]();
	strcpy(tmp, string);
	char* tmp2 = new char[2]();
	tmp2[0] = c;
	tmp2[1] = '\0';
	++size;
	delete[] string;
	string = new char[size]();
	strcpy(string, tmp);
	strcpy(string+strlen(tmp), tmp2);
	delete[] tmp;
	delete[] tmp2;
	return *this;
}


String::~String()
{
	delete[] string;
}

void String::display()
{
	std::cout << string << std::endl;
}

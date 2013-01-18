#ifndef STRING_H
#define STRING_H

#include <iostream>

class String
{
public :
  String();
  String(const std::string &);
  String(const String &);
  String(char c);
  String(char* str);
  String(const char* str);
  const String & operator=(const String & s);
  const String & operator=(const std::string & s);
  const String & operator=(const char* s);
  const String & operator=(const char & c);
  const String & operator+(const String & s);
  const String & operator+(const std::string & s);
  const String & operator+(const char* s);
  const String & operator+(const char & c);
  void display();
  ~String();

private :
  int size;
  char* string; 
};

#endif


//– Opérations de concaténation (+) et de comparaison (==, !=, <, >, <=, >=) entre chaînes ;
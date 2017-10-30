#include <iostream>
#include "Text.h"
#define MAX_INTPUT 256
using namespace std;

Text::Text(const char *s)
{
	if(s)
	{
		len = (int)strlen(s);
		str = new char [len+1];
		strcpy(str, s);
	}

	else
	{
		len = 0;
		str = NULL;
	}
}

Text::Text(const Text &s)
{
	len = s.len;
	str = new char [len+1];
	strcpy(str, s.str);
}

Text::~Text(void)
{
	if(str)
		delete [] str;
}

Text &Text::operator=(const Text &s)
{
	if(str)
		delete [] str;

	len = s.len;
	str = new char[len+1];
	strcpy(str, s.str);

	return *this;
}

Text &Text::operator+=(const Text &s)
{
	len += s.len;
	char *newstr = new char[len+1];
	strcpy(newstr, str);
	if(str) delete [] str;

	strcat(newstr, s.str);
	str = newstr;
	
	return *this;
}

Text Text::operator+(const Text &s) const
{
	Text temp;
	temp.len = len + s.len;
	temp.str = new char [temp.len+1];
	strcpy(temp.str, str);
	strcat(temp.str, s.str);

	return temp;
}

bool Text::operator==(const Text &s) const
{
	return strcmp(str, s.str) == 0;
}

char &Text::operator[](int index)
{
	return str[index];
}

ostream &operator<<(ostream &os, const Text &s)
{
	os << s.str;
	return os;
}

istream &operator>>(istream &is, Text &s)
{
	char str[MAX_INTPUT];
	is >> str;
	
	s = Text(str);
	return is;
}

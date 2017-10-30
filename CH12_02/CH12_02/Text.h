#include <iostream>
using namespace std;

class Text
{
public:
	Text(const char *s=NULL);
	Text(const Text &s);
	~Text(void);
	int length() { return len; }

	Text &operator=(const Text &s);
	Text &operator+=(const Text &s);
	Text operator+(const Text &s) const;
	bool operator==(const Text &s) const;
	char &operator[](int index);

	friend ostream &operator<<(ostream &os, const Text &s);
	friend istream &operator>>(istream &is, Text &s);

private:
	char *str;
	int len;
};
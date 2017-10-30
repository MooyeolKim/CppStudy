//14.04.04
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex(double real=0, double image=0);
	~Complex(void);

	Complex operator+(const Complex &c) const;
	Complex operator-(const Complex &c) const;
	Complex operator*(const Complex &c) const;
	Complex operator/(const Complex &c) const;

	Complex &operator=(const Complex &c);
	Complex &operator+=(const Complex &c);
	Complex &operator-=(const Complex &c);
	Complex &operator*=(const Complex &c);
	Complex &operator/=(const Complex &c);

	bool operator==(const Complex &c) const;

	friend ostream &operator<<(ostream &os, const Complex &c);
	friend istream &operator>>(istream &is, Complex &c);

private:
	double real;
	double image;
};



	
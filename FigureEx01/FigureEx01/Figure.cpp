#include <iostream>
#include "Figure.h"
using namespace std;

Figure::Figure(int x, int y, int width, int height)
{
	Move(x, y);
	Resize(width, height);
}

Figure::~Figure()
{
	cout << "Destructor: Figure" << endl;
}

void Figure::Move(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Figure::Resize(int width, int height)
{
	this->width = width;
	this->height = height;
}

/*void Figure::Draw()
{
	cout << "Figure::Draw" << endl;
}*/

Ellipse::Ellipse(int x, int y, int width, int height) : Figure(x, y, width, height)
{
}

Triangle::Triangle(int x, int y, int width, int height) : Figure(x, y, width, height)
{
}

Rectangle::Rectangle(int x, int y, int width, int height) : Figure(x, y, width, height)
{
}

Ellipse::~Ellipse()
{
	cout << "Destructor: Ellipse" << endl;
}

Triangle::~Triangle()
{
	cout << "Destructor: Triangle" << endl;
}

Rectangle::~Rectangle()
{
	cout << "Destructor: Rectangle" << endl;
}

void Ellipse::Draw()
{
	cout << "Draw Ellipse : ";
	cout << "(" << x << ", " <<y << "), ";
	cout << width << " x " << height;
	cout << endl;
}

void Triangle::Draw()
{
	cout << "Draw Triangle : ";
	cout << "(" << x << ", " <<y << "), ";
	cout << width << " x " << height;
	cout << endl;
}

void Rectangle::Draw()
{
	cout << "Draw Rectangle : ";
	cout << "(" << x << ", " <<y << "), ";
	cout << width << " x " << height;
	cout << endl;
}
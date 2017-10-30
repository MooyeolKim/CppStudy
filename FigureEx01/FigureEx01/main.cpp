#include <iostream>
#include "Figure.h"
using namespace std;
#define FIGURES 10


int main(void)
{
	/*Ellipse ellipse(30, 20, 50, 20);
	Triangle triangle(10, 10, 20, 30);
	Rectangle rectangle(20, 30, 10, 20);

	ellipse.Draw();
	triangle.Draw();
	rectangle.Draw();
*/

	Figure *figures[FIGURES] = {
		new Triangle(10, 10, 20, 30),
		new Rectangle(20, 30, 10, 20),
		new Ellipse(30, 20, 50, 20),
		new Rectangle(20, 30, 10, 20),
		new Rectangle(20, 30, 10, 20),
		new Ellipse(10, 20, 40, 30),
		new Triangle(20, 30, 10, 10),
		new Ellipse(10, 30, 70, 40),
		new Ellipse(30, 40, 90, 20),
		new Triangle(50, 0, 30, 20)
	};

	for(int i=0 ; i<FIGURES ; i++)
	{
		figures[i]->Draw();
	}
	for(int i=0 ; i<FIGURES ; i++)
	{
		delete figures[i];
	}

	return 0;
}

#include <iostream>
#include "Point.h"
using namespace std;

int main(void)
{
	//Point *pt = new Point(10, 20);
	Point *pt = NULL;
	pt->operator new(sizeof(Point));
	*pt(10, 20);
	pt->Show();
	delete pt;

	return 0;
}

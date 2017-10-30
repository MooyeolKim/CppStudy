#include <iostream>
#include "Text.h"
using namespace std;

int main(void)
{
	Text t1("Text");
	Text t2("Test");
	Text t3("Text Test");

	//Text t4 = t1;
	Text t4;
	t4.operator=(t1);
	//t4 += Text(" ") + t2;
	t4.operator+=(" ").operator+=(t2);

	//cout << "t3 : " << t3 << endl;
	//cout << "t4 : " << t4 << endl;
	operator<<(cout, "t3 : ");
	operator<<(cout, t3) << endl;
	operator<<(cout, "t4 : ");
	operator<<(cout, t4) << endl;

	//if(t3 == t4)
	if(t3.operator==(t4))
	{
		cout << "t3와 t4는 같습니다." << endl;
	}

	else
	{
		cout << "t3와 t4는 같지 않습니다." << endl;
	}

	for(int i=0 ; i<t4.length() ; i++)
	{
		//cout << t4[i] << " / ";
		operator<<(cout, t4.operator[](i)) << " / ";
	}

	cout << endl;
	return 0;
}
#include <iostream>
#include "Student.h"
using namespace std;

int Student::count = 0;

Student::Student(char *_name, int _age)
{
	strncpy(name, _name, MAX_NAME-1);
	age = _age;
	count++;
}

Student::~Student(void)
{
	count--;
}

void Student::Show(void)
{
	cout << name;
	cout << " (" << age << ")";
	cout << endl;
}

int Student::GetCount(void)
{
	return count;
}

int Student::CompareAge(const void *a, const void *b)
{
	Student *pa = (Student *)a;
	Student *pb = (Student *)b;

	if(pa->age > pb->age) return 1;
	else if(pa->age < pb->age) return -1;
	else return 0;
}

int Student::CompareName(const void *a, const void *b)
{
	Student *pa = (Student *)a;
	Student *pb = (Student *)b;

	return strcmp(pa->name, pb->name);
}

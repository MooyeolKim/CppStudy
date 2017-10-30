#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(int num, char *part, char *date, char *name, int position, int salarytype)
{
	this->name = new char[strlen(name)+1];
	strcpy(this->name, name);
	this->position = position;
	this->salarytype = salarytype;
}

Employee::~Employee(void)
{
	delete [] name;
}

int Employee::GetNum()
{
	return num;
}

char *Employee::GetPart()
{
	return part;
}

char *Employee::GetName()
{
	return name;
}

char *Employee::GetPosition()
{
	char *titles[] = {"사원", "대리", "과장", "부장", "임원"};
	return titles[position];
}

char *Employee::GetSalaryType()
{
	char *types[] = {"시급제", "월급제", "연봉제"};
	return types[salarytype];
}

EmployeeHourly::EmployeeHourly(int num, char *part, char *date, char *name, int position, int workinghours)
	: Employee(num, part, date, name, position, 0), workinghours(workinghours)
{
}

EmployeeMonthly::EmployeeMonthly(int num, char *part, char *date, char *name, int position, int serviceyears)
	: Employee(num, part, date, name, position, 1), serviceyears(serviceyears)
{
}

EmployeeYearly::EmployeeYearly(int num, char *part, char *date, char *name, int position, int grade)
	: Employee(num, part, date, name, position, 2), grade(grade)
{
}

int EmployeeHourly::GetSalary()
{
	int salary = workinghours * 10000;
	for(int i=0 ; i<position ; i++)
	{
		salary *= 2;
	}
	return salary;
}

int EmployeeMonthly::GetSalary()
{
	int salary = 2000000;
	salary += 2000000 * position;
	salary += 50000 * serviceyears;
	return salary;
}

int EmployeeYearly::GetSalary()
{
	int salary = 20000000;
	salary += 10000000 * position;
	salary += 5000000 * grade;
	return salary/12;
}

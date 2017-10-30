#include <stdio.h>
#include <string.h>
#include "Employee.h"
//#define EMPLOYEES 10

int main(void)
{
	int i, n;
	/*Employee *employee[] = {
		new EmployeeHourly("권상우", 0, 200),
		new EmployeeHourly("조인성", 0, 220),
		new EmployeeMonthly("감우성", 1, 3),
		new EmployeeMonthly("강동원", 1, 5),
		new EmployeeYearly("황정민", 2, 3),
		new EmployeeMonthly("박중훈", 2, 15),
		new EmployeeMonthly("최민식", 3, 20),
		new EmployeeYearly("정진영", 3, 3),
		new EmployeeHourly("안성기", 4, 50),
		new EmployeeYearly("송강호", 4, 4)
	};*/

	printf("입력할 직원수 : ");
	scanf("%d", &n);
	printf("사번 / 부서 / 입사일 / 이름 / 직급 / 급여산출방식 / 종류 입력");
	for(i=0 ; i<n ; i++)
	{
		
	
	

	printf("----------------------------------------\n");
	printf(" 이름\t| 직급\t| 종류\t | 급여\n");
	printf("----------------------------------------\n");
	for(i=0 ; i<n ; i++)
	{
		printf(" %s\t| ", employee[i]->GetName());
		printf("%s\t| ", employee[i]->GetPosition());
		printf("%s | ", employee[i]->GetSalaryType());
		printf("%d\n", employee[i]->GetSalary());

		delete employee[i];
	}

	printf("----------------------------------------\n");
	return 0;
}




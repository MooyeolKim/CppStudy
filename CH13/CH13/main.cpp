#include <stdio.h>
#include <string.h>
#include "Employee.h"
//#define EMPLOYEES 10

int main(void)
{
	int i, n;
	/*Employee *employee[] = {
		new EmployeeHourly("�ǻ��", 0, 200),
		new EmployeeHourly("���μ�", 0, 220),
		new EmployeeMonthly("���켺", 1, 3),
		new EmployeeMonthly("������", 1, 5),
		new EmployeeYearly("Ȳ����", 2, 3),
		new EmployeeMonthly("������", 2, 15),
		new EmployeeMonthly("�ֹν�", 3, 20),
		new EmployeeYearly("������", 3, 3),
		new EmployeeHourly("�ȼ���", 4, 50),
		new EmployeeYearly("�۰�ȣ", 4, 4)
	};*/

	printf("�Է��� ������ : ");
	scanf("%d", &n);
	printf("��� / �μ� / �Ի��� / �̸� / ���� / �޿������� / ���� �Է�");
	for(i=0 ; i<n ; i++)
	{
		
	
	

	printf("----------------------------------------\n");
	printf(" �̸�\t| ����\t| ����\t | �޿�\n");
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




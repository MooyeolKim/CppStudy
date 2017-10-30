#include <stdio.h>
#define PI 3.141592

double CircleArea(double radius);
double CirclePerimeter(double radius);
void Input(double *input);

int main(void)
{
	double area, perimeter, input;

	Input(&input);
	area = CircleArea(input);
	perimeter = CirclePerimeter(input);

	printf("�������� %0.2f�� ���� ������ %0.2f�Դϴ�.\n", input, area);
	printf("�������� %0.2f�� ���� ������ %0.2f�Դϴ�.\n", input, perimeter);
	return 0;
}

double CircleArea(double radius)
{
	double area;
	area = radius * radius * PI;
	return area;
}

double CirclePerimeter(double radius)
{
	double perimeter;
	perimeter = 2 * PI * radius;
	return perimeter;
}

void Input(double *input)
{
	printf("�������� �Է��Ͻÿ� : ");
	scanf("%lf", input);
	
}
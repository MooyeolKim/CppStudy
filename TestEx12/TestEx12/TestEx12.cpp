#include <stdio.h>

int main(void)
{
	double radius, area, perimeter;
	double pi = 3.141592;

	printf("�������� �Է��Ͻÿ� : ");
	scanf("%lf", &radius);

	area = radius * radius * pi;
	perimeter = 2 * pi * radius;

	printf("������ %0.2f�Դϴ�.\n", area);
	printf("�ѷ��� %0.2f�Դϴ�.\n", perimeter);

	return 0;
}
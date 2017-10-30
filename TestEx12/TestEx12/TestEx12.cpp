#include <stdio.h>

int main(void)
{
	double radius, area, perimeter;
	double pi = 3.141592;

	printf("반지름을 입력하시오 : ");
	scanf("%lf", &radius);

	area = radius * radius * pi;
	perimeter = 2 * pi * radius;

	printf("면적은 %0.2f입니다.\n", area);
	printf("둘레는 %0.2f입니다.\n", perimeter);

	return 0;
}
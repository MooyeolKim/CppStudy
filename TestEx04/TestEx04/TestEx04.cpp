#include <stdio.h>

int main(void)
{
	int radius;
	double pi;

	printf("반지름 입력 : ");
	scanf("%d", &radius);
	printf("원주율 입력 : ");
	scanf("%lf", &pi);

	printf("반지름 : %d\n", radius);
	printf("원주율 : %0.2f\n", pi);

	return 0;
}



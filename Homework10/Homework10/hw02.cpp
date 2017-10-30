#include <stdio.h>

double calculator(int h, int w);

int main(void)
{
	int height, weight;
	double bmi;

	printf("키를 입력(cm) : ");
	scanf("%d", &height);

	printf("몸무게를 입력(kg) : ");
	scanf("%d", &weight);

	bmi = calculator(height, weight);

	printf("당신의 비만지수는 %.2f으로, ", bmi);

	if(bmi >= 30)
		printf("고도비만입니다.\n");
	else if(bmi >= 25)
		printf("비만입니다.\n");
	else if(bmi >= 23)
		printf("과체중입니다.\n");
	else if(bmi >= 18.5)
		printf("표준체중입니다.\n");
	else
		printf("체중미달입니다.\n");

	return 0;
}

double calculator(int h, int w)
{
	double dh = (double)h/100;
	double bm = w/(dh*dh);
	return bm;
}


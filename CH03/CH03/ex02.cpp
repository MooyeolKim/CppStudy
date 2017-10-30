#include <stdio.h>

int main(void)
{
	int height, weight;
	double dheight, bmi;

	printf("신장을 입력하시오 : ");
	scanf("%d", &height);
	printf("체중을 입력하시오 : ");
	scanf("%d", &weight);

	dheight = height/100.0;
	bmi = weight / (dheight*dheight);

	printf("\n****결과****\n");
	printf("신장 : %dcm\n", height);
	printf("체중 : %dkg\n", weight);
	printf("비만지수 : %.2f\n", bmi);

	if(bmi >= 30.0)
		printf("비만도 : 고도비만\n");
	else if(bmi >= 25.0)
		printf("비만도 : 비만\n");
	else if(bmi >= 23.0)
		printf("비만도 : 과체중\n");
	else if(bmi >= 18.5)
		printf("비만도 : 표준체중\n");
	else
		printf("비만도 : 체중미달\n");

	return 0;
}
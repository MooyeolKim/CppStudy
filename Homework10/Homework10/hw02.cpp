#include <stdio.h>

double calculator(int h, int w);

int main(void)
{
	int height, weight;
	double bmi;

	printf("Ű�� �Է�(cm) : ");
	scanf("%d", &height);

	printf("�����Ը� �Է�(kg) : ");
	scanf("%d", &weight);

	bmi = calculator(height, weight);

	printf("����� �������� %.2f����, ", bmi);

	if(bmi >= 30)
		printf("�����Դϴ�.\n");
	else if(bmi >= 25)
		printf("���Դϴ�.\n");
	else if(bmi >= 23)
		printf("��ü���Դϴ�.\n");
	else if(bmi >= 18.5)
		printf("ǥ��ü���Դϴ�.\n");
	else
		printf("ü�߹̴��Դϴ�.\n");

	return 0;
}

double calculator(int h, int w)
{
	double dh = (double)h/100;
	double bm = w/(dh*dh);
	return bm;
}


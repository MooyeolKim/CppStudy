#include <stdio.h>

int main(void)
{
	int height, weight;
	double dheight, bmi;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &height);
	printf("ü���� �Է��Ͻÿ� : ");
	scanf("%d", &weight);

	dheight = height/100.0;
	bmi = weight / (dheight*dheight);

	printf("\n****���****\n");
	printf("���� : %dcm\n", height);
	printf("ü�� : %dkg\n", weight);
	printf("������ : %.2f\n", bmi);

	if(bmi >= 30.0)
		printf("�񸸵� : ����\n");
	else if(bmi >= 25.0)
		printf("�񸸵� : ��\n");
	else if(bmi >= 23.0)
		printf("�񸸵� : ��ü��\n");
	else if(bmi >= 18.5)
		printf("�񸸵� : ǥ��ü��\n");
	else
		printf("�񸸵� : ü�߹̴�\n");

	return 0;
}
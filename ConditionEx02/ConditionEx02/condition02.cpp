#include <stdio.h>

int main(void)
{
	int kor, eng, mat, tot;
	double avg;

	printf("���� : ");
	scanf("%d", &kor);
	printf("���� : ");
	scanf("%d", &eng);
	printf("���� : ");
	scanf("%d", &mat);

	tot = kor + eng + mat;
	avg = (double)tot / 3;
	
	printf("\n���� : %d\n", tot);
	printf("��� : %.2f\n", avg);
	
	if(avg >= 90)
		printf("���� : A\n");
	else if(avg < 90 && avg >= 80)
		printf("���� : B\n");
	else if(avg < 80 && avg >= 70)
		printf("���� : C\n");
	else if(avg < 70 && avg >= 60)
		printf("���� : D\n");
	else
		printf("���� : F\n");

	return 0;
}
		

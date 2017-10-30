#include <stdio.h>

int main(void)
{
	int kor, eng, mat, tot;
	double avg;

	printf("국어 : ");
	scanf("%d", &kor);
	printf("영어 : ");
	scanf("%d", &eng);
	printf("수학 : ");
	scanf("%d", &mat);

	tot = kor + eng + mat;
	avg = (double)tot / 3;
	
	printf("\n총점 : %d\n", tot);
	printf("평균 : %.2f\n", avg);
	
	if(avg >= 90)
		printf("학점 : A\n");
	else if(avg < 90 && avg >= 80)
		printf("학점 : B\n");
	else if(avg < 80 && avg >= 70)
		printf("학점 : C\n");
	else if(avg < 70 && avg >= 60)
		printf("학점 : D\n");
	else
		printf("학점 : F\n");

	return 0;
}
		

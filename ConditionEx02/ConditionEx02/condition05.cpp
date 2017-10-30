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
	
	switch((int)avg/10)
	{	
	case 10:
	case 9:
		printf("학점 : A\n");
		break;
	case 8:
		printf("학점 : B\n");
		break;
	case 7:
		printf("학점 : C\n");
		break;
	case 6:
		printf("학점 : D\n");
		break;
	default :
		printf("학점 : F\n");
		break;
	}

	return 0;
}
		

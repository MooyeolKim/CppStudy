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
	
	switch((int)avg/10)
	{	
	case 10:
	case 9:
		printf("���� : A\n");
		break;
	case 8:
		printf("���� : B\n");
		break;
	case 7:
		printf("���� : C\n");
		break;
	case 6:
		printf("���� : D\n");
		break;
	default :
		printf("���� : F\n");
		break;
	}

	return 0;
}
		

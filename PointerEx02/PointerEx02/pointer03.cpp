#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int students, s, sum=0;
	int *score = NULL;

	printf("������ ó���� �л����� �Է� : ");
	scanf("%d", &students);
	score = (int*)malloc(sizeof(int)*students);

	printf("�л��� ������ �Է��ϼ���.\n");
	for(s=0 ; s<students ; s++)
	{
		printf("%d�� : ", s+1);
		scanf("%d", &score[s]);
		//&score[s] = score+s
	}

	printf("-------------------\n");
	for(s=0 ; s<students ; s++)
	{
		sum += score[s];
		printf("%d�� : %3d\n", s+1, score[s]);
	}

	printf("-------------------\n");
	printf("���� : %3d ��\n", sum);
	printf("��� : %3.2f ��\n", (double)sum/students);

	free(score);
	return 0;
}
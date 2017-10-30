#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int students;
	int sum=0;
	int l, s;
	int *lessons = NULL;
	int **score = NULL;

	printf("�л� ���� �Է��ϼ��� : ");
	scanf("%d", &students);
	printf("-------------------------------\n");

	score = (int **)malloc(sizeof(int *)*students);
	lessons = (int *)malloc(sizeof(int)*students);

	for(s=0 ; s<students ; s++)
	{
		printf("%d��° �л��� �������� �� : ", s+1);
		scanf("%d", lessons+s);

		score[s] = (int *)malloc(sizeof(int)*lessons[s]);

		printf("%d��° �л��� ���� (%d��) : ", s+1, lessons[s]);
		for(l=0 ; l<lessons[s] ; l++)
		{
			scanf("%d", &score[s][l]);
		}
	}
	printf("-------------------------------\n");

	for(s=0 ; s<students ; s++)
	{
		sum = 0;
		for(l=0 ; l<lessons[s] ; l++)
		{
			sum += score[s][l];
		}
		printf("%d��° �л� : %0.2f\n", s+1, (double)sum/lessons[s]);
	}

	for(s=0 ; s<students ; s++)
	{
		free(score[s]);
	}

	free(score);
	free(lessons);

	return 0;
}


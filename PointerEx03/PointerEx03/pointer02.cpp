#include <stdio.h>
#include <malloc.h>

#define LESSONS 3

int main(void)
{
	int students, sum=0, l, s;
	char *lesson[] = {"Korean", "English", "Math"};
	int (*score)[LESSONS] = NULL;

	printf("�л� ���� �Է��Ͻÿ� : ");
	scanf("%d", &students);
	printf("-----------------------------------\n");

	score = (int (*)[LESSONS])malloc(sizeof(int [LESSONS])*students);

	for(s=0 ; s<students ; s++)
	{
		printf("%d��° �л��� ���� : ", s+1);
		for(l=0 ; l<LESSONS ; l++)
		{
			scanf("%d", &score[s][l]);
		}
	}
	printf("-----------------------------------\n");

	for(l=0 ; l<LESSONS ; l++)
	{
		sum = 0;
		for(s=0 ; s<students ; s++)
		{
			sum += score[s][l];
		}
		printf("[%-7s] Total : %d, ", lesson[l], sum);
		printf("Average : %0.2f\n", (double)sum/students);
	}

	free(score);
	return 0;
}


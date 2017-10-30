#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int i;
	int *ptr = NULL;

	ptr = (int *)malloc(sizeof(int)*3);

	for(i=0 ; i<3 ; i++)
	{
		printf("%d ", ptr[i]);
	}

	printf("\nÀÔ·Â : ");
	for(i=0 ; i<3 ; i++)
	{
		scanf("%d", &ptr[i]);
	}

	for(i=0 ; i<3 ; i++)
	{
		printf("%d ", ptr[i]);
	}

	printf("\n");
	free(ptr);
	
	for(i=0 ; i<3 ; i++)
	{
		printf("%d ", ptr[i]);
	}
	printf("\n");

	return 0;
}
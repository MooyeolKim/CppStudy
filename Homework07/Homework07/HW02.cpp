#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int i, j, n;
	int *ptr = NULL;

	printf("***n���� �Ҽ� ���ϱ�***\n");
	printf("������ �Է� : ");
	scanf("%d", &n);

	n += 1;

	ptr = (int*)malloc(sizeof(int)*n);

	for(i=0 ; i<n ; i++)
	{
		*(ptr+i) = 1;
	}

	for(i=2 ; i<n-1 ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			if(j%i == 0)
				*(ptr+j) = 0;
		}
	}

	printf("1���� %d ������ �Ҽ� : ", n-1);
	for(i=2 ; i<n ; i++)
	{
		if(*(ptr+i)==1)
			printf("%d ", i);
	}
	printf("\n");

	free(ptr);
	return 0;
}

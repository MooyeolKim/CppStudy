#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int i, j, mul=1, max;
	char *isprime;
	
	printf("소수를 찾을 최대 수를 입력하시오 : ");
	scanf("%d", &max);

	isprime = (char*)malloc(sizeof(char)*max);
	for(i=2 ; i<max ; i++)
		isprime[i] = 1;

	for(i=2 ; i<max ; i++)
	{
		for(j=2, mul=i*j ; mul<max ; mul=i*++j)
		{
			isprime[mul] = 0;
		}
	}

	for(i=2 ; i<max ; i++)
	{
		if(isprime[i])
			printf("%d\t", i);
	}
	printf("\n");

	free(isprime);
	return 0;
}



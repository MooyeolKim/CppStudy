#include <stdio.h>

int FindMax(int a, int b);
void PrintLine(char symbol, int length);

int main(void)
{
	int val1 = 10, val2 = 20;
	int max;

	max = FindMax(val1, val2);
	PrintLine('#', 1);
	printf("큰 값은 %d입니다. \n", max);
	PrintLine('*', 6);

	return 0;
}

int FindMax(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

void PrintLine(char symbol, int length)
{
	int i, j;
	for(i=length ; i<length+5 ; i++)
	{
		for(j=0 ; j<i ; j++) 
		{
			printf("%c", symbol);
		}
		printf("\n");
	}
}
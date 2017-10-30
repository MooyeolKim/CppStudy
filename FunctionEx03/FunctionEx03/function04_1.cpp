#include <stdio.h>

int FindMax(int a, int b);
void PrintLine(char symbol, int length);

int main(void)
{
	int val1 = 10, val2 = 20;
	int i, max;

	for(i=1 ; i<=5 ; i++)
		PrintLine('#', i);	
	max = FindMax(val1, val2);
	printf("ū ���� %d�Դϴ�. \n", max);
	for(i=6 ; i<=10 ; i++)
		PrintLine('*', i);	
	
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
	int i;
	for(i=0 ; i<length ; i++)
	{
		printf("%c", symbol);
	}
	printf("\n");
}
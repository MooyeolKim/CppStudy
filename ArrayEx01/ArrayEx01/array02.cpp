#include <stdio.h>

int main(void)
{
	int row, col;
	char str[] = "I LOVE YOU";

	for(row =0; row<10; row++)
	{
		for(col=0; col<=row; col++)
		{
			printf("%c", str[col]);
		}
		printf("\n");
	}
	
	return 0;
}
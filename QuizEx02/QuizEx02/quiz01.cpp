#include <stdio.h>

int main(void)
{
	int i, j, len, tmp;
	char str[] = "green";

	len = sizeof(str)/sizeof(char);

	printf("reverse Àü : ");

	for(i=0 ; i<len ; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	for(i=0 ; i<len/2 ; i++)
	{
		for(j=len-1; j>=0 ; j--)
		{
			if(i+j == len-2)
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	}

	printf("\nreverse ÈÄ : ");

	for(i=0 ; i<len ; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}
#include <stdio.h>
#include <string.h>
#define NUM 128

int main(void)
{
	int i, len;
	char str[NUM] , tmp;

	printf("���ڿ� �Է� : ");
	fgets(str, NUM-1, stdin);
	str[strlen(str)-1] = '\0';

	len = strlen(str);
	
	printf("reverse �� : ");

	for(i=0 ; i<len ; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	for(i=0 ; i<len/2 ; i++)
	{
		tmp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = tmp;
	}

	printf("reverse �� : ");

	for(i=0 ; i<len ; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}
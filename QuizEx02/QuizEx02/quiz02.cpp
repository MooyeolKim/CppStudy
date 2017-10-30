#include <stdio.h>
#include <string.h>
#define NUM 128

int main(void)
{
	int i, len;
	char str[NUM] , tmp;

	printf("문자열 입력 : ");
	fgets(str, NUM-1, stdin);
	str[strlen(str)-1] = '\0';

	len = strlen(str);
	
	printf("reverse 전 : ");

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

	printf("reverse 후 : ");

	for(i=0 ; i<len ; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}
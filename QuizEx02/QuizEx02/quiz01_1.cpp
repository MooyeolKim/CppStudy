#include <stdio.h>

int main(void)
{
	int i, len;
	char str[] = "korea", tmp;

	len = sizeof(str)/sizeof(char) - 1; //char데이터에는 null값이 들어가게 되므로 보기쉽게 -1

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
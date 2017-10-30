#include <stdio.h>

int main(void)
{
	int i;
	char str[6] = "abcde";
	char *ptr;

	ptr = str;

	for(i=0 ; i<5 ; i++)
	{
		printf("%c ", *(ptr+i));
	}
	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		printf("%c ", str[i]);
	}
	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		printf("%c ", ptr[i]);
	}
	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		printf("%c ", *(str+i));
	}
	printf("\n");
	
	for(i=0 ; i<5 ; i++)
	{
		printf("%d ", &str[i]);
	}
	printf("\n");
	
	for(i=0 ; i<5 ; i++)
	{
		printf("%d ", ptr+i);
	}
	printf("\n");
	
	for(i=0 ; i<5 ; i++)
	{
		printf("%p ", ptr+i);
	}
	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		printf("%p ", &str[i]);
	}
	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		printf("%p ", &ptr[i]);
	}
	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		printf("%p ", str+i);
	}
	printf("\n");

	printf("%s\n", ptr);
	printf("%s\n\n", str);

	for(i=0 ; i<5 ; i++)
	{
		printf("%s\n", ptr+i);
	}
	
	return 0;
}
	
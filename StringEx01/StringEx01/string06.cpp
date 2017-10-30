#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i;

	printf("\n---------------------------------- Alpha ----------------------------------\n");
	for(i=0 ; i<128 ; i++)
	{
		if(isalpha(i))
			printf("%d %c\t", i, i);
	}

	printf("\n\n---------------------------------- Upper ----------------------------------\n");
	for(i=0 ; i<128 ; i++)
	{
		if(isupper(i))
			printf("%d %c\t", i, i);
	}

	printf("\n\n---------------------------------- Lower ----------------------------------\n");
	for(i=0 ; i<128 ; i++)
	{
		if(islower(i))
			printf("%d %c\t", i, i);
	}

	printf("\n\n---------------------------------- Digit ----------------------------------\n");
	for(i=0 ; i<128 ; i++)
	{
		if(isdigit(i))
			printf("%d %c\t", i, i);
	}

	printf("\n\n---------------------------------- xDigit ----------------------------------\n");
	for(i=0 ; i<128 ; i++)
	{
		if(isxdigit(i))
			printf("%d %c\t", i, i);
	}

	printf("\n\n---------------------------------- Alnum ----------------------------------\n");
	for(i=0 ; i<128 ; i++)
	{
		if(isalnum(i))
			printf("%d %c\t", i, i);
	}

	printf("\n\n---------------------------------- Print ----------------------------------\n");
	for(i=0 ; i<128 ; i++)
	{
		if(isprint(i))
			printf("%d %c\t", i, i);
	}

	printf("\n\n---------------------------------- Graph ----------------------------------\n");
	for(i=0 ; i<128 ; i++)
	{
		if(isgraph(i))
			printf("%d %c\t", i, i);
	}

	printf("\n\n---------------------------------- Punct ----------------------------------\n");
	for(i=0 ; i<128 ; i++)
	{
		if(ispunct(i))
			printf("%d %c\t", i, i);
	}

	printf("\n\n---------------------------------- Space ----------------------------------\n");
	for(i=0 ; i<128 ; i++)
	{
		if(isspace(i))
			printf("%d %c\t", i, i);
	}
	printf("\n\n");

	return 0;
}

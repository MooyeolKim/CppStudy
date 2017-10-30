#include <stdio.h>

int main(void)
{
	char input;

	while(1)
	{
		input = getchar();
		if(input == '.')
			break;

		if(input >= '0' && input <= '9')
			continue;

		if(input >= 'a' && input <= 'z')
			input +='A'-'a';
	
		putchar(input);
	}

	printf("\n");
	return 0;
}

#include <stdio.h>

int main(void)
{
	char input;
	int upper = 0, lower =0;

	while(1)
	{
		input = getchar();

		if(input == '.')
			break;
		
		if(input >= 'a' && input <= 'z')
			lower++;
				
		if(input >= 'A' && input <= 'Z')
			upper++;
		putchar(input);

	}

	printf("대문자의 갯수 : %d\n", upper);
	printf("소문자의 갯수 : %d\n", lower);
	return 0;
}

	
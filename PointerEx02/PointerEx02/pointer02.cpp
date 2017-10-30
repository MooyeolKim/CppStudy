#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAX_INPUT 256

int main(void)
{
	char input[MAX_INPUT] = {0};
	char *output = NULL;
	int length, ch;

	fgets(input, MAX_INPUT-1, stdin);
	//input[strlen(input)-1] = '\0';

	length = strlen(input)+1;
	output = (char*)malloc(sizeof(char)*length);

	for(ch=0 ; ch<length ; ch++)
	{
		if(input[ch] >= 'a' && input[ch] <= 'z')
			output[ch] = input[ch] + 'A' - 'a';
		else
			output[ch] = input[ch];
	}

	printf("Input : %s", input);
	printf("Output : %s", output);
	free(output);
	return 0;
}
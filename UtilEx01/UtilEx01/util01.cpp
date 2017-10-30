//14.03.26
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 100;
	double d = 3.141592;
	char text[100];

	sprintf(text, "%d", i);
	printf("문자열 : %s\n",text);

	i = atoi(text);
	printf("정수 : %d\n", i);

	sprintf(text, "%lf", d);
	printf("문자열 : %s\n",text);

	i = atof(text);
	printf("실수 : %f\n", d);

	return 0;
}
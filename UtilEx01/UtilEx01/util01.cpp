//14.03.26
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 100;
	double d = 3.141592;
	char text[100];

	sprintf(text, "%d", i);
	printf("���ڿ� : %s\n",text);

	i = atoi(text);
	printf("���� : %d\n", i);

	sprintf(text, "%lf", d);
	printf("���ڿ� : %s\n",text);

	i = atof(text);
	printf("�Ǽ� : %f\n", d);

	return 0;
}
//14.03.21
#include <stdio.h>

void output(int taken);

int main(void)
{
	int given=10;
	printf("main이 넘겨준 값 : %d (%p)\n", given, &given);
	output(given);
	return 0;
}

void output(int taken)
{
	printf("output이 받은 값 : %d (%p)\n", taken, &taken);
}
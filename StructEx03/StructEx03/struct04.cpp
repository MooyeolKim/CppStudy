#include <stdio.h>

struct Point
{
	int x;
	int y;
};

int main(void)
{
	int i;
	struct Point pt[3] = {{10, 20}, {30, 40}, {50, 60}};
	struct Point *ptr = pt;

	for(i=0 ; i<3 ; i++)
	{
		//printf("%d번째 구조체 값 : (%d, %d)\n", i+1, ptr[i].x, ptr[i].y);
		//printf("%d번째 구조체 값 : (%d, %d)\n", i+1, (*(ptr+i)).x, (*(ptr+i)).y);
		printf("%d번째 구조체 값 : (%d, %d)\n", i+1, (ptr+i)->x, (ptr+i)->y);
	}

	return 0;
}


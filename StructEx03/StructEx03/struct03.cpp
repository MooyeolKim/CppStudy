#include <stdio.h>

struct Point 
{
	int x; 
	int y;
};

int main(void)
{
	int i;
	struct Point pt[3] = {{10,20}, {30,40}, {50,60}};

	for(i=0 ; i<3 ; i++)
	{
		printf("%d번째 점의 좌표 : (%d, %d)\n", i+1, pt[i].x, pt[i].y);
	}

	return 0;
}
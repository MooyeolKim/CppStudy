//14.03.31
#include <stdio.h>

struct Point
{
	int x, y;
};

void SetPosition(struct Point *pPoint, int _x, int _y)
{
	pPoint->x = _x;
	pPoint->y = _y;
}

void Move(struct Point *pPoint, int _x, int _y)
{
	pPoint->x += _x;
	pPoint->y += _y;
}

void Show(const struct Point *pPoint)
{
	printf("(%d, %d)\n", pPoint->x, pPoint->y);
}

int main(void)
{
	struct Point p1, p2;

	SetPosition(&p1, 10, 20);
	SetPosition(&p2, 50, 60);

	Move(&p1, 5, 0);
	Move(&p2, 0, 5);

	Show(&p1);
	Show(&p2);

	return 0;
}

//14.04.02
class Point
{
public:
	Point(void);
	Point(int x, int y);
	void Show(void);
	Point operator+(Point pt);
private:
	int x, y;
};
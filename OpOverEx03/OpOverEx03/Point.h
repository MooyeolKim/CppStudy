//14.04.03
class Point
{
public:
	Point(void);
	Point(int x, int y);
	void Show(void);
	Point operator*(int mag);
	friend Point operator*(int mag, Point pt);
private:
	int x, y;
};
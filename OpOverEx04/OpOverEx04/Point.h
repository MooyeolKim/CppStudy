//14.04.03
class Point
{
public:
	Point(void);
	Point(int x, int y);
	void Show(void);
	Point &operator=(const Point &pt);
	Point &operator+=(const Point &pt);
	Point &operator-=(const Point &pt);
	Point &operator*=(int mag);
	Point &operator/=(int div);
private:
	int x, y;
};
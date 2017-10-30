//14.04.03
class Point
{
public:
	Point(void);
	Point(int x, int y);
	void Show(void);
	Point operator+(const Point &pt) const;
	Point operator-(const Point &pt) const;
	Point operator*(int mag) const;
	Point operator/(int div) const;

	friend Point operator*(int mag, const Point &pt);
	friend Point operator/(int mag, const Point &pt);
private:
	int x, y;
};

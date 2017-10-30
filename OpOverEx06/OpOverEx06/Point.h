//14.04.03
class Point
{
public:
	Point(void);
	Point(int x, int y);
	void Show(void);
	Point &operator++(void);
	Point &operator--(void);
	const Point operator++(int);
	const Point operator--(int);
private:
	int x, y;
};

//14.04.02
class Point
{
public:
	Point(void);
	Point(int x, int y);
	void Show(void);
	Point operator++(void);
	Point operator++(int);
private:
	int x, y;
};
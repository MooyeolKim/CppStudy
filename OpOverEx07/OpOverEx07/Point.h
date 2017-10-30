class Point
{
public:
	Point(void);
	Point(int x, int y);
	void Show(void);
	bool operator==(const Point &pt) const;
	bool operator!=(const Point &pt) const;
private:
	int x, y;
};
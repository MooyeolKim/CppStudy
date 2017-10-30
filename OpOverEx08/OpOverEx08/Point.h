class Point
{
public:
	Point(void);
	Point(int x, int y);
	void Show(void);
	int &operator[](int index);
private:
	int x, y;
};
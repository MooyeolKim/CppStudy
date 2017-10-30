class Point
{
public:
	Point(void);
	Point(int x, int y);
	void Show(void);
	void *operator new(size_t size);
	void operator delete(void *p);
private:
	int x, y;
};
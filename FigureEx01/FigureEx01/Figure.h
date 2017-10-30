//14.04.07
class Figure
{
public:
	Figure(int x, int y, int width, int height);
	virtual ~Figure();

	void Move(int x, int y);
	void Resize(int width, int height);
	virtual void Draw() = 0;

protected:
	int x;
	int y;
	int width;
	int height;
};

class Ellipse : public Figure
{
public:
	Ellipse(int x, int y, int width, int height);
	~Ellipse();
	virtual void Draw();
};

class Triangle : public Figure
{
public:
	Triangle(int x, int y, int width, int height);
	~Triangle();
	virtual void Draw();
};

class Rectangle : public Figure
{
public:
	Rectangle(int x, int y, int width, int height);
	~Rectangle();
	virtual void Draw();
};
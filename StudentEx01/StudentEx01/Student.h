#define MAX_NAME 20

class Student
{
public:
	Student(char *_name, int _age);
	~Student(void);
	void Show(void);
	static int GetCount(void);
	static int CompareAge(const void *a, const void *b);
	static int CompareName(const void *a, const void *b);
private:
	int age;
	char name[MAX_NAME];
	static int count;
};

//14.04.08
class Employee
{
public:
	Employee(int num, char *part, char *date, char *name, int position, int salarytype);
	~Employee(void);

	int GetNum();
	char *GetPart();
	char *GetDate();
	char *GetName();
	char *GetPosition();
	char *GetSalaryType();
	virtual int GetSalary() = 0;

protected:
	int num;
	char *part;
	char *date;
	char *name;
	int position;
	int salarytype;
};

class EmployeeHourly : public Employee
{
public:
	EmployeeHourly(int num, char *part, char *date, char *name, int position, int workinghours);
	virtual int GetSalary();

private:
	int workinghours;
};

class EmployeeMonthly: public Employee
{
public:
	EmployeeMonthly(int num, char *part, char *date, char *name, int position, int serviceyears);
	virtual int GetSalary();
	
private:
	int serviceyears;
};

class EmployeeYearly : public Employee
{
public:
	EmployeeYearly(int num, char *part, char *name, char *date, int position, int grade);
	virtual int GetSalary();

private:
	int grade;
};
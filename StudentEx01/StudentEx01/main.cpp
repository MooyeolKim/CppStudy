//14.04.01
//14.04.02
#include <iostream>
#include "Student.h"
using namespace std;

int main(void)
{
	/*Student s1("�����", 22);
	Student s2("���ٿ�", 19);
	Student s3("������", 27);

	s1.Show();
	s2.Show();
	s3.Show();
	
	cout << "������ ��: " << Student::GetCount() << endl;
	cout << "������ ��: " << s3.GetCount() << endl;
	*/

	int i;
	Student talent[] = {
		Student("�����", 22),
		Student("���ٿ�", 19),
		Student("������", 27),
		Student("�̿���", 37),
		Student("������", 26)
	};
	
	int count = Student::GetCount();

	cout << "���̼�:" << endl;
	qsort(talent, count, sizeof(Student), Student::CompareAge);
	for(i=0 ; i<count ; i++)
	{
		talent[i].Show();
	}

	cout << endl << "�̸���:" << endl;
	qsort(talent, count, sizeof(Student), Student::CompareName);
	for(i=0 ; i<count ; i++)
	{
		talent[i].Show();
	}
	return 0;
}
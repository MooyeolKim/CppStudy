//14.04.01
//14.04.02
#include <iostream>
#include "Student.h"
using namespace std;

int main(void)
{
	/*Student s1("김옥빈", 22);
	Student s2("문근영", 19);
	Student s3("전지현", 27);

	s1.Show();
	s2.Show();
	s3.Show();
	
	cout << "수강생 수: " << Student::GetCount() << endl;
	cout << "수강생 수: " << s3.GetCount() << endl;
	*/

	int i;
	Student talent[] = {
		Student("김옥빈", 22),
		Student("문근영", 19),
		Student("전지현", 27),
		Student("이영애", 37),
		Student("송혜교", 26)
	};
	
	int count = Student::GetCount();

	cout << "나이순:" << endl;
	qsort(talent, count, sizeof(Student), Student::CompareAge);
	for(i=0 ; i<count ; i++)
	{
		talent[i].Show();
	}

	cout << endl << "이름순:" << endl;
	qsort(talent, count, sizeof(Student), Student::CompareName);
	for(i=0 ; i<count ; i++)
	{
		talent[i].Show();
	}
	return 0;
}
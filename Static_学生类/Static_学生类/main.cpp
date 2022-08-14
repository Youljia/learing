#include<iostream>
#include "Students.h"
using namespace std;

int main()
{

	Students s1(1, 100);
	Students s2(2, 99);
	Students s3(3, 99);
	Students s4(4, 100);
	int i = s1.t_student_size();
	double k = s1.a_student_score();
	cout << "学生人数为" << i << endl;
	cout << "学生平均成绩为" << k << endl;
	return 0;
}
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
	cout << "ѧ������Ϊ" << i << endl;
	cout << "ѧ��ƽ���ɼ�Ϊ" << k << endl;
	return 0;
}
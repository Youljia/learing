#include "Students.h"

//��ʼ��������̬��Ա����
int Students::t_num = 0;
double Students::t_score = 0;
double Students::a_score = 0;
//��ʼ��ѧ��
Students::Students(int id, double score)
{
	m_id = id;
	m_score = score;
	t_num++;
	t_score += m_score;
}

//��ȡѧ������
int Students::t_student_size()
{
	return t_num;
}
//��ȡѧ������֮��
double Students::t_student_score()
{
	return t_score;
}
//��ȡѧ��ƽ������
double Students::a_student_score()
{
	a_score = t_score / t_num;
	return a_score;
}

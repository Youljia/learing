#include "Students.h"

//初始化三个静态成员变量
int Students::t_num = 0;
double Students::t_score = 0;
double Students::a_score = 0;
//初始化学生
Students::Students(int id, double score)
{
	m_id = id;
	m_score = score;
	t_num++;
	t_score += m_score;
}

//获取学生人数
int Students::t_student_size()
{
	return t_num;
}
//获取学生分数之和
double Students::t_student_score()
{
	return t_score;
}
//获取学生平均分数
double Students::a_student_score()
{
	a_score = t_score / t_num;
	return a_score;
}

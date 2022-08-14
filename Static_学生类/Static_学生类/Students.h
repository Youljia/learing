#pragma once
class Students
{
public:
	Students(int id, double score);
	static int t_student_size();
	static double t_student_score();
	static double a_student_score();
private:
	int m_id;
	double m_score;
	static int t_num;
	static double t_score;
	static double a_score;
};


# define _CRT_SECURE_NO_WARNINGS
# include<iostream>
using namespace std;

class Teacher
{
public:
	Teacher(int age, char* name)
	{
		m_age = age;
		int len = strlen(name);
		m_name = (char*)malloc(len + 1);
		strcpy(m_name, name);
	}

	//显式拷贝构造函数
	Teacher(Teacher& another)
	{
		m_age = another.m_age;
		int len = strlen(another.m_name);
		m_name = (char*)malloc(len + 1);
		strcpy(m_name, another.m_name);
	}

	void print()
	{
		cout << m_name << endl;
	}

	~Teacher()
	{
		cout << "end... " << endl;
		if (m_name != NULL)
		{
			free(m_name);
			m_name = NULL;
		}
	}
private:
	char* m_name;
	int m_age;
};
int main()
{
	char name[] = "Alice";
	Teacher t1(21, name);
	t1.print();
	Teacher t2(t1);
	return 0;
}
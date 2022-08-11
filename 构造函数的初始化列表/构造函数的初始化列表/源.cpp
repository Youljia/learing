/*
	当类的成员变量是一个类的时候
	初始化的方法一共有两种！
	1.调用拷贝构造函数
	2.调用有参构造函数
*/
# include<iostream>
using namespace std;

class A
{
public:
	A(int a1)
	{
		m_a1 = a1;
		cout << m_a1 << endl;
	}
private:
	int m_a1;
};

class B
{
public:
	//调用拷贝构造函数
	B(A& a1, A& a2) :m_a1(a1),m_a2(a2)
	{

	}

	//调用有参构造函数
	B(int a1, int a2) :m_a1(a1), m_a2(a2)
	{

	}


private:
	A m_a2;
	A m_a1;
};

int main()
{
	B b(10, 20);
	return 0;
}
/*
	����ĳ�Ա������һ�����ʱ��
	��ʼ���ķ���һ�������֣�
	1.���ÿ������캯��
	2.�����вι��캯��
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
	//���ÿ������캯��
	B(A& a1, A& a2) :m_a1(a1),m_a2(a2)
	{

	}

	//�����вι��캯��
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
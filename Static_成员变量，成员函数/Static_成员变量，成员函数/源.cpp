# include<iostream>
using namespace std;

//��̬�ֲ�����
void test()
{
	static int i = 12;
}

class Polygon
{
public:
	Polygon(int n)
	{
		m_n = n;
		cout << "this is a " << n << " polygon" << endl;
	}
	static int len;
private:
	int m_n;
	int girth;
	double area;
};

int Polygon::len = 1;//��̬��Ա�����������������һʱ����г�ʼ��,���û�еĻ��ᱨ��

class People
{
public:
	static void age(int age) {
		m_age = age;
	}
private:
	static int m_age;
};

int People::m_age = 10;

int main()
{
	test();
	//cout << i << endl;   //��Ȼi���ڴ�û�б��ͷţ�������Ȼ������ͨ������������������ֱ�ӷ���

	//����̬��Ա������public��ʱ��
	Polygon p(5);
	p.len = 2;//ͨ�������޸ľ�̬��Ա����
    Polygon::len = 7;//ͨ�����޸ľ�̬��Ա����

	//������̬��Ա������private��ʱ��
	People::age(10);
	People p();
	return 0;
}
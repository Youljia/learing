# include<iostream>
using namespace std;

class A
{
public:
	A(int a)
	{
		m_a = a;
	}
	int m_a;

	void printf()
	{
		cout << "a = " << m_a << endl;
	}

	~A()
	{
		cout << "endl..." << endl;
	}
};

int main()
{
	//��new��̬��������
	int h = 0;
	cout << "��������������" << endl;
	cin >> h;
	int* p = new int[h];

	//��newΪ�࿪�ٿռ�
	A* a = new A(20);//���ù��캯��
	a->printf();
	delete a;
	delete[]p;//�Զ�������������
	return 0;
}
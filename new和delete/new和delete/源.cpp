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
	//用new动态定义数组
	int h = 0;
	cout << "请输入数组容量" << endl;
	cin >> h;
	int* p = new int[h];

	//用new为类开辟空间
	A* a = new A(20);//调用构造函数
	a->printf();
	delete a;
	delete[]p;//自动调用析构函数
	return 0;
}
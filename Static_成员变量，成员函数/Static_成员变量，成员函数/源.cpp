# include<iostream>
using namespace std;

//静态局部变量
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

int Polygon::len = 1;//静态成员变量必须在类外面第一时间进行初始化,如果没有的话会报错

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
	//cout << i << endl;   //虽然i的内存没有被释放，但是任然不可以通过变量名在主函数中直接访问

	//当静态成员变量是public的时候
	Polygon p(5);
	p.len = 2;//通过对象修改静态成员变量
    Polygon::len = 7;//通过类修改静态成员变量

	//当当静态成员变量是private的时候
	People::age(10);
	People p();
	return 0;
}
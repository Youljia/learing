# include "Data.h"
# include"Stack_array.h"
# include<iostream>
using namespace std;

int main()
{
	Data data(10);
	for (int i = 0; i < 9; ++i)
	{
		data.add_last(i);
	}
	data.print_data();
	int f = data.get_size();
	cout << f << endl;

	Stack_array stack(data);
	stack.print();
	int j = stack.peek();
	cout << j << endl;
	stack.pop();
	j = stack.peek();
	cout << j << endl;
	stack.print();
	return 0;
}
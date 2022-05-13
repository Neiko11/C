//函数占位参数
#include <iostream>
using namespace std;
//语法：返回值类型 函数名（数据类型）{}
//占位参数还可以有默认参数
void func(int a, int = 10)
{
	cout << "this is func" << endl;
}

int main()
{
	func(10);

	system("pause");
	return 0;
}
//函数默认参数
#include <iostream>
using namespace std;
//如果传入数据，就用自己的数据，如果没有，那么用默认值
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
//注意事项
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//2.函数的声明和实现只能有一个默认参数
int func2(int a, int b);
int func2(int a= 20, int b = 20)
{
	return a + b;
}

int main()
{
	
	cout << func2() << endl;

	system("pause");
	return 0;
}
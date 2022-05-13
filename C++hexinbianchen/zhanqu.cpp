//栈区
#include <iostream>
using namespace std;
//栈区数据注意事项 不要返回局部变量的地址
//栈区的数据有编译器管理开辟和释放
int* func(int b)//形参数据也会放在栈区
{
	b = 100;
	int a = 10;//局部变量 存放在栈区，栈区的数据在函数执行完毕后自动释放
	return &a;
}
int main()
{
	int* p = func(0);
	cout << *p << endl;//切换32位尝试。第一次可以打印正确的数字，是因为编译器做了保留
	cout << *p << endl;//第二次这个数据就不再保留

	system("pause");
	return 0;
}
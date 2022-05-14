//全局区
#include <iostream>
using namespace std;
//全局变量
int g_a = 10;
int g_b = 20;
const int cg_a = 10;
const int cg_b = 20;

int main()
{
	//创建普通局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址为： " << (long long)&a << endl;
	cout << "局部变量b的地址为： " << (long long)&b << endl;
	cout << "全局变量g_a的地址为： " << (long long)&g_a << endl;
	cout << "全局变量g_b的地址为： " << (long long)&g_b << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 20;
	cout << "静态变量s_a的地址为： " << (long long)&s_a << endl;
	cout << "静态变量s_b的地址为： " << (long long)&s_b << endl;

	//常量
	//字符串常量
	cout << "字符串常量的地址为： " << (long long)&"hello world" << endl;
	//const修饰变量
	//const修饰的全局变量，局部变量
	cout << "全局常量cg_a的地址为： " << (long long)&cg_a << endl;
	cout << "全局常量cg_a的地址为： " << (long long)&cg_b << endl;
	
	int cl_a = 10;
	int cl_b = 20;
	cout << "局部常量cl_a的地址为： " << (long long)&cl_a << endl;
	cout << "局部常量cl_b的地址为： " << (long long)&cl_b << endl;

	system("pause");
	return 0;
}
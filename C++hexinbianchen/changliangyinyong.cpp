//常量引用
#include <iostream>
using namespace std;
void showvalue(const int& val)
{
	//val = 1000;
	cout << "val= " << val << endl;
}

int main()
{
	int a = 10;
	//int& ref = 10;错误用法，引用必须一块合法的内存空间
	//加上const后，编译器将代码修改 int temp = 10; const int& ref = temp;
	const int& ref = 10;
	//ref = 20;//加入const之后变为只读，不可修改		 
	int b = 100;
	showvalue(b);
	cout << "b= " << b << endl;

	system("pause");
	return 0;
}
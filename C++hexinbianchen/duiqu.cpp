#include <iostream>
using namespace std;
//堆区
int* func()
{
	//指针本质也是局本变量，放在栈上，指针保存的数据是放在堆区
	int* p = new int(10);
	return p;
}

int main()
{
	int* p = func();
	cout << *p << endl;

	system("pause");
	return 0;
}
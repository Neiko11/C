//引用的本质
#include <iostream>
using namespace std;
//引用的本质就是一个指针常量
//引用一旦初始化后，就不可以发生改变
void func(int& ref)
{
	ref = 100;//ref是引用，转换为*ref = 100
}

int main()
{
	int a = 10;
	int& ref = a;//int* const ref = &a
	ref = 20;//* ref = 20;
	cout << "a= " << a << endl;
	cout << "ref= " << ref << endl;
	func(a);
	

	system("pause");
	return 0;
}
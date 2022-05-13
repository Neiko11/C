//new操作符
#include <iostream>
using namespace std;
int* func()
{
	int* a = new int(10);
	return a;
}

void test01()
{
	int* a = func();
	cout << *a << endl;
	cout << *a << endl;
	cout << *a << endl;
	delete a;
	//cout << *a << endl;//内存已被释放，再次访问就是非法操作，会报错误
}

void test02()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete[]arr;//释放数组
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
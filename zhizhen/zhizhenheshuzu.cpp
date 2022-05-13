#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << "第一个元素为：" << arr[0] << endl;
	int* p = arr;//数组名就是数组首地址
	cout << "利用指针访问第一个元素：" << *p << endl;
	p++;//让指针向后偏移4个字节
	cout << "利用指针访问第二个元素：" << *p << endl;
	cout << "利用指针遍历数组：" << endl;
	int* p2 = arr;
	for (int i = 0; i < 9; i++)
	{
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}
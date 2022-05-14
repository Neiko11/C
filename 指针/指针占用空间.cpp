#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int* p = &a;
	cout << "*p占用内存大小：" << sizeof(int*) << endl;
	system("pause");
	return 0;
}
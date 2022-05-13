#include <iostream>
using namespace std;

int main()
{
	//空指针：指针变量指向内存中编号为0的空间
	//用途：初始化指针变量
	int* p = NULL;

	//注意：空指针指向的内存是不可以访问的
	//0-255之间的内存编号是系统占用的，因此不可以访问
	*p = 100;


	system("pause");
	return 0;
}
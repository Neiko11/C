//引用做函数参数
#include <iostream>
using namespace std;
//值传递
void swap01(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
	/*cout << "swap01_a= " << a << endl;
	cout << "swap01_b= " << b << endl;*/
}
//指针传递
void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	swap01(a, b);//值传递，形参不会修饰实参
	cout << "swap01_a= " << a << endl;
	cout << "swap01_b= " << b << endl;
	swap02(&a, &b);//地址传递，形参会修饰实参
	cout << "swap02_a= " << a << endl;
	cout << "swap02_b= " << b << endl;
	int c = 10;
	int d = 20;
	cout << "c= " << c << endl;
	cout << "d= " << d << endl;
	swap03(c, d);//引用传递，形参会修饰实参
	cout << "swap03_a= " << a << endl;
	cout << "swap03_b= " << b << endl;
	system("pause");
	return 0;
}
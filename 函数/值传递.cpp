#include <iostream>
using namespace std;

//所谓值传递，就是函数调用时实参将数值传给形参
//值传递时，如果形参发生改变，并不会影响实参
//定义函数，实现两个数字进行交换函数
//如果函数不需要返回值，声明的时候可以写void
void swap(int num1, int num2)
{
    cout << "交换前：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}
int main()
{
    int a = 10;
    int b = 20;
    //当我们做值传递的时候，函数的形参发生改变，并不会影响实参
    swap(a, b);
    cout << "a = " << a << "b = " << b << endl;
    return 0;
}
#include <iostream>
using namespace std;

//函数定义的时候，num1和num2并没有真实数据，只是一个形式上的参数，检查形参
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    //a和b称为实际参数，简称实参
    //当调用函数时候，实参的值会传给形参
    int a = 10;
    int b = 20;
    int c = add (a,b);
    cout << c << endl;
    return 0;
}
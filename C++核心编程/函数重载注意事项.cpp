#include <iostream>
using namespace std;

//1.引用作为重载的条件
void fun(int& a)
{
    cout << "fun(int& a)调用" << endl;
}

void fun(const int& a)
{
    cout << "fun(const int& a)调用" << endl;
}

//2.函数重载碰到默认参数
void fun2(int a,int b = 10)
{
    cout << "fun2(int a,int b)调用" << endl;
}

void fun2(int a)
{
    cout << "fun2(int a)调用" << endl;
}

int main()
{
    int a = 10;
    fun(a);//调用fun(int& a)
    fun(10);//调用fun(const int& a)
    //fun2(20);//当函数重载碰到默认参数,出现二义性报错,尽量避免这种情况
    fun2(10, 20);
    system("pause");
    return 0;
}
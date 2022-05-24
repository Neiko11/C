#include <iostream>
using namespace std;
class myprint
{
public:
    //重载函数调用运算符
    void operator()(string test)
    {
        cout << test << endl;
    }
};
void myprint02(string test)
{
    cout << test << endl;
}
void test01()
{
    myprint myprint;
    myprint("hello world"); //由于使用起来非常类似于函数调用,因此称为仿函数
    myprint02("hello world");
}
// 仿函数非常灵活,没有固定的写法
class Myadd
{
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};
void test02()
{
    Myadd myadd;
    int ret = myadd(100, 100);
    cout << ret << endl;
    // 匿名函数对象
    cout << Myadd()(100, 100) << endl;
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;

// 1.无参无返
void test01()
{
    cout << "this is test01" << endl;
}
// 2.有参无返
void test02(int a)
{
    cout << "this is test02 a = " << a << endl;
}
// 3.无参有返
int test03()
{
    cout << "this is test03" << endl;
    return 1000;
}
// 4.有参有返
int test04(int a)
{
    cout << "this is test04 a = " << a << endl;
    return a;
}
int main()
{
    test01();
    test02(100);
    int num1 = test03();
    cout << "num1 = " << num1 << endl;
    int num2 = test04(10000);
    cout << "nume2 = " << num2 << endl;
}
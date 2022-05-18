#include <iostream>
using namespace std;
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
class person
{
public:
    //静态成员函数
    static void func()
    {
        m_a = 100; //静态成员函数可以访问静态成员变量
        // m_b = 200;//静态成员函数不可以访问非静态成员变量,无法区分到底是哪个对象的m_b属性
        cout << "static void func函数调用" << endl;
    }
    static int m_a;
    int m_b;
    //静态函数也是有访问权限的
private:
    static void func2()
    {
        cout << "static void func2调用" << endl;
    }
};
int person::m_a = 0;
void test01()
{
    // 1.通过对象访问
    person p;
    p.func();
    // 2.通过类名访问
    person::func();
    //person::func2();//类外访问不到私有静态成员函数
}
int main()
{
    test01();
    system("pause");
    return 0;
}
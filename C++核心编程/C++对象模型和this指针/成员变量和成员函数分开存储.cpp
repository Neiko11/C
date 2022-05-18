#include <iostream>
using namespace std;
class person
{
    int m_a;//非静态成员变量属于类的对象上
    static int m_b;//静态成员变量不属于类对象上
    void func(){}//非静态成员函数
    static void func2(){}//静态成员函数不属于类对象上
};
int person::m_b = 0;
void test01()
{
    person p;
    // C++编译器会给每个空对象也分配一个字节空间,是为了区分空对象占内存的位置
    //每个空对象也应该有一个独一无二的内存地址
    cout << "sizeof(p) = " << sizeof(p) << endl;
}
void test02()
{
    person p;
    cout << "sizeof(p) = " << sizeof(p) << endl;
}
int main()
{
    //test01();
    test02();
    system("pause");
    return 0;
}
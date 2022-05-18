#include <iostream>
using namespace std;
// 成员函数后加const后我们称为这个函数为常函数
// 常函数内不可以修改成员属性
// 成员属性声明时加关键字mutable后,在常函数中依然可以修改
//常函数
class person
{
public:
    // this指针本质是指针常量,指针的指向是不可以修改的
    // const person* const this;
    // 在成员函数后面加const,修饰的是this指向,让指针指向的值也不可以修改
    void showperson() const
    {
        // this->m_a = 100;
        // this = NULL;//this指针不可以修改指针的指向的
        this->m_b = 200;
    }
    void func()
    {
        m_a = 100;
    }
    int m_a;
    mutable int m_b;//特殊变量,即使在常函数中,也可以修改这个值,加关键字mutable
};
void test01()
{
    person p;
    p.showperson();
}
//常对象
void test02()
{
    const person p;//在对象前加const,变为常对象
    // p.m_a = 100;
    p.m_b = 300;//m_b是特殊值,在常对象下也可以修改
    // 常对象只能调用常函数
    p.showperson();
    // p.func();// 常对象不可以调用普通成员函数,因为普通成员函数可以修改属性
}
int main()
{
    test01();
    system("pause");
    return 0;
}
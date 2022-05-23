#include <iostream>
#include <ostream>
using namespace std;
class person
{
public:
    person(int a, int b)
    {
        m_a = a;
        m_b = b;
    }
    friend ostream &operator<<(ostream &cout, person &p);
    // public:
    //利用成员函数重载"<<"运算符 p.operator<<(cout)简化为p<<cout
    //一般不会用成员函数重载<<运算符,因为无法实现cout在左侧
    // void operator<<(cout)
    // {
    // }
private:
    int m_a;
    int m_b;
};
//只能利用全局函数重载<<运算符
ostream &operator<<(ostream &cout, person &p) //本质 operator<<(cout,p)简化cout<<p
{
    cout << "m_a =" << p.m_a << "m_b = " << p.m_b;
    return cout;
}
void test01()
{
    person p(10, 10);
    cout << p << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}
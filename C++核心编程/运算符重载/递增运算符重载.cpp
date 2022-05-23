#include <iostream>
using namespace std;
class myintegar
{
    friend ostream &operator<<(ostream &cout, myintegar myint);

public:
    myintegar()
    {
        m_num = 0;
    }
    //重载前置++运算符 返回引用为了一直对一个数据进行递增操作
    myintegar &operator++()
    {
        //
        m_num++;
        return *this;
    }
    //重载后置++运算符 int代表占位参数,可以用于区分前置和后置递增
    myintegar operator++(int)
    {
        // 先记录当时结果
        myintegar temp = *this;
        // 后递增
        m_num++;
        // 最后记录结果做返回
        return temp;
    }

private:
    int m_num;
};
ostream &operator<<(ostream &cout, myintegar myint)
{
    cout << myint.m_num;
    return cout;
}
void test01()
{
    myintegar myint;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}
void test02()
{
    myintegar myint;
    cout << myint++ << endl;
    cout << myint << endl;
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}
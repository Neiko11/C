#include <iostream>
using namespace std;
class myinteger
{
    friend ostream &operator<<(ostream &cout, myinteger myint);

public:
    myinteger()
    {
        m_num = 0;
    }
    myinteger &operator--() //Ç°ÖÃ++
    {
        m_num--;
        return *this;
    }
    myinteger operator--(int)
    {
        myinteger tmep = *this;
        m_num--;
        return tmep;
    }

private:
    int m_num;
};
ostream &operator<<(ostream &cout, myinteger myint)
{
    cout << myint.m_num;
    return cout;
}
void test01()
{
    myinteger myint;
    cout << --(--myint) << endl;
    cout << myint << endl;
}
void test02()
{
    myinteger myint;
    cout << myint-- << endl;
    cout << myint << endl;
}
int main()
{
    test01();
    test02();
    int a = 0;
    cout << --(--a) << endl;
    cout << a << endl;
    int b = 0;
    cout << b-- << endl;
    cout << b << endl;
    system("pause");
    return 0;
}
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
    //���ó�Ա��������"<<"����� p.operator<<(cout)��Ϊp<<cout
    //һ�㲻���ó�Ա��������<<�����,��Ϊ�޷�ʵ��cout�����
    // void operator<<(cout)
    // {
    // }
private:
    int m_a;
    int m_b;
};
//ֻ������ȫ�ֺ�������<<�����
ostream &operator<<(ostream &cout, person &p) //���� operator<<(cout,p)��cout<<p
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
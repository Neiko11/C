#include <iostream>
using namespace std;
//�������캯������ʱ��
class person
{
public:
    person()
    {
        cout << "personĬ�Ϲ��캯������" << endl;
    }
    person(int age)
    {
        cout << "person�вι��캯������" << endl;
        m_age = age;
    }
    person(const person &p)
    {
        cout << "person�������캯������" << endl;
        m_age = p.m_age;
    }
    ~person()
    {
        cout << "person�������캯������" << endl;
    }
    int m_age;
};

// 1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
    person p1(20);
    person p2(p1);
    cout << "p2������" << p2.m_age << endl;
}
// 2.ֵ���ݵķ�ʽ������������ֵ
void dowork(person p)
{

}
void test02()
{
    person p;
    dowork(p);
}
// 3.ֵ��ʽ���ؾֲ�����
person dowork2()
{
    person p1;
    cout << (int *)&p1 << endl;
    return p1;
}
void test03()
{
    person p = dowork2();
    cout << (int *)&p << endl;
}
int main()
{
    // test01();
    // test02();
    test03();
    system("pause");
    return 0;
}
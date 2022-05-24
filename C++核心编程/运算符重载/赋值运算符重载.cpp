#include <iostream>
using namespace std;
class person
{
public:
    person(int age)
    {
        m_age = new int(age);
    }
    ~person()
    {
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
    }
    //���ظ�ֵ�����
    person &operator=(person &p)
    {
        // �������ṩǳ����
        // m_age = p.m_age;
        // Ӧ�����ж��Ƿ��������ڶ���,��������ͷŸɾ������
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
        //���
        m_age = new int(*p.m_age);
        return *this;
    }
    int *m_age;
};
void test01()
{
    person p1(18);
    person p2(20);
    person p3(30);
    p3 = p2 = p1;
    cout << "p1 age = " << *p1.m_age << endl;
    cout << "p2 age = " << *p2.m_age << endl;
    cout << "p3 age = " << *p3.m_age << endl;
}
int main()
{
    test01();
    // int a = 10;
    // int b = 20;
    // int c = 30;
    // c = b = a;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "c = " << c << endl;
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;
//���캯���ĵ��ù���
// 1.����һ����,C++���������ÿ���඼���3������
//Ĭ�Ϲ���(��ʵ��) ��������(��ʵ��) ��������(ֵ����)

// 2.�������д���вι��캯��,�������Ͳ����ṩĬ�Ϲ���,��Ȼ�ṩ��������
//�������д�˿������캯��,�������Ͳ����ṩ������ͨ���캯����
class person
{
public:
    person()
    {
        cout << "person��Ĭ�Ϲ��캯������" << endl;
    }
    // person(int age)
    // {
    //     cout << "person���вι��캯������" << endl;
    //     m_age = age;
    // }
    person(const person &p)
    {
        cout << "person�Ŀ������캯������" << endl;
        m_age = p.m_age;
    }
    ~person()
    {
        cout << "person��������������" << endl;
    }
    int m_age;
};

// void test01()
// {
//     person p;
//     p.m_age = 18;
//     person p2(p);
//     cout << "p2������Ϊ" << p2.m_age << endl;
// }
void test02()
{
    person p;
    // person p2(p);
    // cout << "p2������Ϊ" << p2.m_age << endl;
}
int main()
{
    // test01();
    test02();
    system("pause");
    return 0;
}
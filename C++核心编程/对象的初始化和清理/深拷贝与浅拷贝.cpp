#include <iostream>
using namespace std;
//ǳ����:�򵥵ĸ�ֵ��������
//���:�ڶ�����������ռ�,���п�������
class person
{
public:
    person()
    {
        cout << "person��Ĭ�Ϲ��캯������" << endl;
    }
    person(int age, int height)
    {
        m_age = age;
        m_height = new int(height);
        cout << "person���вι��캯������" << endl;
    }
    //�Լ�ʵ�ֿ������캯�� ���ǳ��������������
    person(const person &p)
    {
        cout << "person�Ŀ������캯������" << endl;
        m_age = p.m_age;
        // m_height = p.m_height;//������Ĭ��ʵ�־������д���
        //�������
        m_height = new int(*p.m_height);
    }
    ~person()
    {
        //��������,�����������������ͷŲ���
        if (m_height != NULL)
        {
            delete m_height;
            m_height = NULL;
        }
        cout << "person��������������" << endl;
    }
    int m_age;
    int *m_height;
};
void test01()
{
    person p1(18, 160);
    cout << "p1������Ϊ" << p1.m_age << "���Ϊ:" << *p1.m_height << endl;
    person p2(p1);
    cout << "p2������Ϊ" << p2.m_age << "���Ϊ:" << *p2.m_height << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}
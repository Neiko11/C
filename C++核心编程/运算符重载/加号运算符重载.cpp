#include <iostream>
using namespace std;
// �Ӻ����������
class person
{
public:
    // 1.��Ա��������+��
    // person operator+(person &p)
    // {
    //     person temp;
    //     temp.m_a = this->m_a + p.m_a;
    //     temp.m_b = this->m_b + p.m_b;
    //     return temp;
    // }
    int m_a;
    int m_b;
};
// 2.ȫ�ֺ�������+��
person operator+(person &p1, person &p2)
{
    person temp;
    temp.m_a = p1.m_a + p2.m_a;
    temp.m_b = p2.m_b + p2.m_b;
    return temp;
}
// �������صİ汾
person operator+(person &p1, int a)
{
    person temp;
    temp.m_a = p1.m_a + a;
    temp.m_b = p1.m_b + a;
    return temp;
}
void test01()
{
    person p1;
    p1.m_a = 10;
    p1.m_b = 10;
    person p2;
    p2.m_a = 10;
    p2.m_b = 10;
    // ��Ա�������ر��ʵ���
    // person p3 = p1.operator+(p2);
    //ȫ�ֺ������ر��ʵ���
    // person p3 = operator+(p1, p2);
    person p3 = p1 + p2;
    //���������Ҳ���Է�����������
    person p4 = p1 + 20;
    cout << "p3.m_a =" << p3.m_a << endl;
    cout << "p3.m_b =" << p3.m_b << endl;
    cout << "p4.m_a =" << p4.m_a << endl;
    cout << "p4.m_b =" << p4.m_b << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}
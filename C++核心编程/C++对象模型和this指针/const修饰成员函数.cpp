#include <iostream>
using namespace std;
// ��Ա�������const�����ǳ�Ϊ�������Ϊ������
// �������ڲ������޸ĳ�Ա����
// ��Ա��������ʱ�ӹؼ���mutable��,�ڳ���������Ȼ�����޸�
//������
class person
{
public:
    // thisָ�뱾����ָ�볣��,ָ���ָ���ǲ������޸ĵ�
    // const person* const this;
    // �ڳ�Ա���������const,���ε���thisָ��,��ָ��ָ���ֵҲ�������޸�
    void showperson() const
    {
        // this->m_a = 100;
        // this = NULL;//thisָ�벻�����޸�ָ���ָ���
        this->m_b = 200;
    }
    void func()
    {
        m_a = 100;
    }
    int m_a;
    mutable int m_b;//�������,��ʹ�ڳ�������,Ҳ�����޸����ֵ,�ӹؼ���mutable
};
void test01()
{
    person p;
    p.showperson();
}
//������
void test02()
{
    const person p;//�ڶ���ǰ��const,��Ϊ������
    // p.m_a = 100;
    p.m_b = 300;//m_b������ֵ,�ڳ�������Ҳ�����޸�
    // ������ֻ�ܵ��ó�����
    p.showperson();
    // p.func();// �����󲻿��Ե�����ͨ��Ա����,��Ϊ��ͨ��Ա���������޸�����
}
int main()
{
    test01();
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;
class base1
{
public:
    int m_a;

protected:
    int m_b;

private:
    int m_c;
};
//�����̳�
class son1 : public base1
{
public:
    void func()
    {
        m_a = 10; //�����еĹ���Ȩ�޳�Ա����������Ȼ�ǹ���Ȩ��
        m_b = 10; //�����еı���Ȩ�޳�Ա����������Ȼ�Ǳ���Ȩ��
        // m_c = 10; //�����е�˽��Ȩ�޳�Ա ������ʲ���
    }
};
void test01()
{
    son1 s1;
    s1.m_a = 100;
    // s1.m_b = 100;//����Ȩ�����ⲻ�ɷ���
}
class base2
{
public:
    int m_a;

protected:
    int m_b;

private:
    int m_c;
};
//�����̳�
class son2 : protected base2
{
public:
    void func()
    {
        m_a = 100; //�����еĹ���Ȩ�޳�Ա�������б�Ϊ�Ǳ���Ȩ��
        m_b = 100; //�����еı���Ȩ�޳�Ա����������Ȼ�Ǳ���Ȩ��
        // m_c = 100; // �����е�˽��Ȩ�޳�Ա ������ʲ���
    }
};
void test02()
{
    son2 s2;
    s2.m_a = 100; // s2.m_a��Ϊ����Ȩ��,����Ȩ�����ⲻ�ɷ���
    // s2.m_b = 100;//����Ȩ�����ⲻ�ɷ���
}
class base3
{
public:
    int m_a;

protected:
    int m_b;

private:
    int m_c;
};
//˽�м̳�
class son3 : private base3
{
public:
    void func()
    {
        m_a = 100; //�����еĹ���Ȩ�޳�Ա�������б�Ϊ��˽��Ȩ��
        m_b = 100; //�����еı���Ȩ�޳�Ա�������б�Ϊ��˽��Ȩ��
        // m_c = 100; // �����е�˽��Ȩ�޳�Ա ������ʲ���
    }
};
void test03()
{
    son3 s3;
    // s3.m_a = 1000;//son3.m_a��Ϊ˽��Ȩ��������ʲ���
    // s3.m_b = 1000;
}
class grandson3 : public son3
{
public:
    void func()
    {
        // m_a = 10000;//����son3.m_a��Ϊ˽��,��ʱ����Ҳ�Ƿ��ʲ���
        // m_b = 10000;
    }
};
int main()
{

    system("pause");
    return 0;
}
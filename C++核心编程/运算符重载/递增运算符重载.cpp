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
    //����ǰ��++����� ��������Ϊ��һֱ��һ�����ݽ��е�������
    myintegar &operator++()
    {
        //
        m_num++;
        return *this;
    }
    //���غ���++����� int����ռλ����,������������ǰ�úͺ��õ���
    myintegar operator++(int)
    {
        // �ȼ�¼��ʱ���
        myintegar temp = *this;
        // �����
        m_num++;
        // ����¼���������
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
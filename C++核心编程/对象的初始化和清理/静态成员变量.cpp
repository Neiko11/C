#include <iostream>
using namespace std;
class person
{
public:
    //���ж��󶼹���ͬһ������
    //����׶ξͷ����ڴ�
    //��������,�����ʼ������
    static int m_a;
    //��̬��Ա����Ҳ���з���Ȩ�޵�
private:
    static int m_b;
};
int person::m_a = 100;
int person::m_b = 200;
void test01()
{
    person p;
    cout << p.m_a << endl;
    person p2;
    p2.m_a = 200;
    cout << p.m_a << endl;
}
void test02()
{
    //��̬��Ա����������ĳ��������,���ж��󶼹���ͬһ������
    //��˾�̬��Ա���������ַ��ʷ�ʽ
    // 1.ͨ��������з���
    // person p;
    // cout << p.m_a << endl;
    // 2.ͨ���������з���
    cout << person::m_a << endl;
    //cout << person::m_b << endl;������ʲ���˽�о�̬��Ա����
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class person
{
public:
    //��̬��Ա����
    static void func()
    {
        m_a = 100; //��̬��Ա�������Է��ʾ�̬��Ա����
        // m_b = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա����,�޷����ֵ������ĸ������m_b����
        cout << "static void func��������" << endl;
    }
    static int m_a;
    int m_b;
    //��̬����Ҳ���з���Ȩ�޵�
private:
    static void func2()
    {
        cout << "static void func2����" << endl;
    }
};
int person::m_a = 0;
void test01()
{
    // 1.ͨ���������
    person p;
    p.func();
    // 2.ͨ����������
    person::func();
    //person::func2();//������ʲ���˽�о�̬��Ա����
}
int main()
{
    test01();
    system("pause");
    return 0;
}
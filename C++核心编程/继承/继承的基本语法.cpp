#include <iostream>
using namespace std;
//��ͨʵ��ҳ��
// javaҳ��
// class java
// {
// public:
//     void header()
//     {
//         cout << "��ҳ ������ ��¼ ע��...(����ͷ��)" << endl;
//     }
//     void footer()
//     {
//         cout << "�������� ���� ���� վ�ڵ�ͼ...(�����ײ�)" << endl;
//     }
//     void left()
//     {
//         cout << "java python c++...(���������б�)" << endl;
//     }
//     void content()
//     {
//         cout << "Javaѧ����Ƶ" << endl;
//     }
// };
// cpp ҳ��
// class cpp
// {
// public:
//     void header()
//     {
//         cout << "��ҳ ������ ��¼ ע��...(����ͷ��)" << endl;
//     }
//     void footer()
//     {
//         cout << "�������� ���� ���� վ�ڵ�ͼ...(�����ײ�)" << endl;
//     }
//     void left()
//     {
//         cout << "java python c++...(���������б�)" << endl;
//     }
//     void content()
//     {
//         cout << "cppѧ����Ƶ" << endl;
//     }
// };
//�̳�ʵ��ҳ��
//�﷨: class ���� : �̳з�ʽ ����
//���� Ҳ��Ϊ ������
//���� Ҳ��Ϊ ����
class Basepage
{
public:
    void header()
    {
        cout << "��ҳ ������ ��¼ ע��...(����ͷ��)" << endl;
    }
    void footer()
    {
        cout << "�������� ���� ���� վ�ڵ�ͼ...(�����ײ�)" << endl;
    }
    void left()
    {
        cout << "java python c++...(���������б�)" << endl;
    }
};
// javaҳ��
class java : public Basepage
{
public:
    void content()
    {
        cout << "Javaѧ����Ƶ" << endl;
    }
};
// cppҳ��
class cpp : public Basepage
{
public:
    void content()
    {
        cout << "cppѧ����Ƶ" << endl;
    }
};
void test01()
{
    cout << "java������Ƶҳ������:" << endl;
    java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "---------------------------" << endl;
    cpp cp;
    cp.header();
    cp.footer();
    cp.left();
    cp.content();
}
int main()
{
    test01();
    system("pause");
    return 0;
}
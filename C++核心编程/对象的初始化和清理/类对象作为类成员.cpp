#include <iostream>
using namespace std;
class phone
{
public:
    phone(string Pname)
    {
        cout << "phone���캯������" << endl;
        m_Pname = Pname;
    }
    ~phone()
    {
        cout << "phone������������" << endl;
    }
    string m_Pname;
};
class person
{
public:
    // phone m_phone = Pname ��ʽת����
    person(string name, string Pname) : m_name(name), m_phone(Pname)
    {
        cout << "person���캯������" << endl;
    }
    ~person()
    {
        cout << "person��������������" << endl;
    }
    string m_name;
    phone m_phone;
};
//������������������Ա,����ʱ���ȹ��������,�ٹ�������,������˳���빹���෴
void test01()
{
    person p("����", "ƻ��MAX");
    cout << p.m_name << "����" << p.m_phone.m_Pname << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;

//public ����Ȩ�� ��Ա���ڿ��Է���,����Ҳ�ɷ���
//protected ����Ȩ�� ��Ա���ڿ��Է���,���ⲻ�ɷ��� �ӿ��Է��ʸ���������
//private ˽��Ȩ�� ��Ա���ڿ��Է���,���ⲻ�ɷ��� �Ӳ����Է��ʸ�˽������

class person
{
public:
    string m_name;
protected:
    string m_car;
private:
    int m_password;
public:
void func()
{
    m_name = "����";
    m_car = "������";
    m_password = 123321;
}
};
int main()
{
    person p1;
    p1.m_name = "����";
    p1.m_car = "����";//����Ȩ��,�����ⲻ�ɷ���
    p1.m_password = 123;//˽��Ȩ��,�����ⲻ�ɷ���
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;

class student
{
public:
    //���е����Ժ���Ϊͳһ��Ϊ��Ա
    //���� ��Ա���� ��Ա����
    //��Ϊ ��Ա���� ��Ա����
    string m_name;
    int m_id;
    void showstudent()
    {
        cout << "����: " << m_name <<"ѧ��: " << m_id<< endl;
    }
    void setname(string name)
    {
        m_name = name;
    }
    void setid(int id)
    {
        m_id = id;
    }
};

int main()
{
    student s1;
    s1.m_name = "����";
    s1.m_id = 1;
    s1.showstudent();
    student s2;
    s2.m_name = "����";
    s2.m_id = 2;
    s2.showstudent();
    student s3;
    s3.setname("����");
    s3.setid(3);
    s3.showstudent();
}
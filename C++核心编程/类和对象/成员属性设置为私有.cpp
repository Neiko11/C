#include <iostream>
using namespace std;
//��Ա��������Ϊ˽��
// 1.�����Լ����ƶ�дȨ��
// 2.���ڿ��Լ�����ݵ���Ч��

class person
{
public:
    //��������
    void setname(string name)
    {
        m_name = name;
    }
    //��ȡ����
    string getname()
    {
        return m_name;
    }
    int getage()
    {
        return m_age;
    }
    void setage(int age)
    {
        if (age < 0 || age > 150)
        {
            cout << "��������ȷ����!" << endl;
            return;
        }
        m_age = age;
    }
    void setlover(string lover)
    {
        m_lover = lover;
    }

private:
    //���� ͨ��public�ɶ���д
    string m_name;
    //���� ͨ��publicֻ��
    int m_age;
    //���� ͨ��publicֻд
    string m_lover;
};
int main()
{
    person p1;
    p1.setname("����");
    cout << "����Ϊ: " << p1.getname() << endl;
    p1.setage(100);
    cout << "����Ϊ: " << p1.getage() << endl;
    p1.setlover("lover");
    // cout << "����Ϊ: " << p1.m_lover << endl;//���ɷ���
    system("pause");
    return 0;
}
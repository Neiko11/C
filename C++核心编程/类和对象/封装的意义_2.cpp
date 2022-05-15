#include <iostream>
using namespace std;

class student
{
public:
    //类中的属性和行为统一称为成员
    //属性 成员属性 成员变量
    //行为 成员函数 成员方法
    string m_name;
    int m_id;
    void showstudent()
    {
        cout << "姓名: " << m_name <<"学号: " << m_id<< endl;
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
    s1.m_name = "张三";
    s1.m_id = 1;
    s1.showstudent();
    student s2;
    s2.m_name = "李四";
    s2.m_id = 2;
    s2.showstudent();
    student s3;
    s3.setname("张三");
    s3.setid(3);
    s3.showstudent();
}
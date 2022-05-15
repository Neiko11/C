#include <iostream>
using namespace std;
//成员属性设置为私有
// 1.可以自己控制读写权限
// 2.对于可以检测数据的有效性

class person
{
public:
    //设置姓名
    void setname(string name)
    {
        m_name = name;
    }
    //获取姓名
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
            cout << "请输入正确年龄!" << endl;
            return;
        }
        m_age = age;
    }
    void setlover(string lover)
    {
        m_lover = lover;
    }

private:
    //姓名 通过public可读可写
    string m_name;
    //年龄 通过public只读
    int m_age;
    //情人 通过public只写
    string m_lover;
};
int main()
{
    person p1;
    p1.setname("张三");
    cout << "姓名为: " << p1.getname() << endl;
    p1.setage(100);
    cout << "年龄为: " << p1.getage() << endl;
    p1.setlover("lover");
    // cout << "情人为: " << p1.m_lover << endl;//不可访问
    system("pause");
    return 0;
}
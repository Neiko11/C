#include <iostream>
using namespace std;

//public 公共权限 成员类内可以访问,类外也可访问
//protected 保护权限 成员类内可以访问,类外不可访问 子可以访问父保护内容
//private 私有权限 成员类内可以访问,类外不可访问 子不可以访问父私有内容

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
    m_name = "张三";
    m_car = "拖拉机";
    m_password = 123321;
}
};
int main()
{
    person p1;
    p1.m_name = "张三";
    p1.m_car = "奔驰";//保护权限,在类外不可访问
    p1.m_password = 123;//私有权限,在类外不可访问
    system("pause");
    return 0;
}
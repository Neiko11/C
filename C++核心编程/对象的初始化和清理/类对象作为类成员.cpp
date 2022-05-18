#include <iostream>
using namespace std;
class phone
{
public:
    phone(string Pname)
    {
        cout << "phone构造函数调用" << endl;
        m_Pname = Pname;
    }
    ~phone()
    {
        cout << "phone析构函数调用" << endl;
    }
    string m_Pname;
};
class person
{
public:
    // phone m_phone = Pname 隐式转换法
    person(string name, string Pname) : m_name(name), m_phone(Pname)
    {
        cout << "person构造函数调用" << endl;
    }
    ~person()
    {
        cout << "person的析构函数调用" << endl;
    }
    string m_name;
    phone m_phone;
};
//当其他类对象做本类成员,构造时候先构造类对象,再构造自身,析构的顺序与构造相反
void test01()
{
    person p("张三", "苹果MAX");
    cout << p.m_name << "拿着" << p.m_phone.m_Pname << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}
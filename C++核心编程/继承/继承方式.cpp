#include <iostream>
using namespace std;
class base1
{
public:
    int m_a;

protected:
    int m_b;

private:
    int m_c;
};
//公共继承
class son1 : public base1
{
public:
    void func()
    {
        m_a = 10; //父类中的公共权限成员到子类中依然是公共权限
        m_b = 10; //父类中的保护权限成员到子类中依然是保护权限
        // m_c = 10; //父类中的私有权限成员 子类访问不到
    }
};
void test01()
{
    son1 s1;
    s1.m_a = 100;
    // s1.m_b = 100;//保护权限类外不可访问
}
class base2
{
public:
    int m_a;

protected:
    int m_b;

private:
    int m_c;
};
//保护继承
class son2 : protected base2
{
public:
    void func()
    {
        m_a = 100; //父类中的公共权限成员到子类中变为是保护权限
        m_b = 100; //父类中的保护权限成员到子类中依然是保护权限
        // m_c = 100; // 父类中的私有权限成员 子类访问不到
    }
};
void test02()
{
    son2 s2;
    s2.m_a = 100; // s2.m_a变为保护权限,保护权限类外不可访问
    // s2.m_b = 100;//保护权限类外不可访问
}
class base3
{
public:
    int m_a;

protected:
    int m_b;

private:
    int m_c;
};
//私有继承
class son3 : private base3
{
public:
    void func()
    {
        m_a = 100; //父类中的公共权限成员到子类中变为是私有权限
        m_b = 100; //父类中的保护权限成员到子类中变为是私有权限
        // m_c = 100; // 父类中的私有权限成员 子类访问不到
    }
};
void test03()
{
    son3 s3;
    // s3.m_a = 1000;//son3.m_a变为私有权限类外访问不到
    // s3.m_b = 1000;
}
class grandson3 : public son3
{
public:
    void func()
    {
        // m_a = 10000;//到了son3.m_a变为私有,及时是子也是访问不到
        // m_b = 10000;
    }
};
int main()
{

    system("pause");
    return 0;
}
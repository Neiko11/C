#include <iostream>
using namespace std;
//普通实现页面
// java页面
// class java
// {
// public:
//     void header()
//     {
//         cout << "首页 公开课 登录 注册...(公共头部)" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心 交流 合作 站内地图...(公共底部)" << endl;
//     }
//     void left()
//     {
//         cout << "java python c++...(公共分类列表)" << endl;
//     }
//     void content()
//     {
//         cout << "Java学科视频" << endl;
//     }
// };
// cpp 页面
// class cpp
// {
// public:
//     void header()
//     {
//         cout << "首页 公开课 登录 注册...(公共头部)" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心 交流 合作 站内地图...(公共底部)" << endl;
//     }
//     void left()
//     {
//         cout << "java python c++...(公共分类列表)" << endl;
//     }
//     void content()
//     {
//         cout << "cpp学科视频" << endl;
//     }
// };
//继承实现页面
//语法: class 子类 : 继承方式 父类
//子类 也称为 派生类
//父类 也成为 基类
class Basepage
{
public:
    void header()
    {
        cout << "首页 公开课 登录 注册...(公共头部)" << endl;
    }
    void footer()
    {
        cout << "帮助中心 交流 合作 站内地图...(公共底部)" << endl;
    }
    void left()
    {
        cout << "java python c++...(公共分类列表)" << endl;
    }
};
// java页面
class java : public Basepage
{
public:
    void content()
    {
        cout << "Java学科视频" << endl;
    }
};
// cpp页面
class cpp : public Basepage
{
public:
    void content()
    {
        cout << "cpp学科视频" << endl;
    }
};
void test01()
{
    cout << "java下载视频页面如下:" << endl;
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
#include <iostream>
using namespace std;
//1.构造函数的分类及调用
//分类
//按照参数分类  无参构造和有参构造
//按照类型分类 普通构造和拷贝构造
class person
{
    public:
    person()
    {
        cout << "person的无参构造函数的调用" << endl;
    }
    person(int a)
    {
        age = a;
        cout << "person的有参构造函数的调用" << endl;
    }
    //拷贝构造函数
    person(const person& p)
    {
        cout << "person的拷贝构造函数的调用" << endl;
        age = p.age;
    }
    int age;
    ~person()
    {
        cout << "person析构函数调用" << endl;
    }
};

//调用
void test01()
{
    // //1.括号法
    // person p;
    // person p2(10);//有参构造函数
    // person p3(p2);//拷贝构造函数
    //注意事项1
    //调用默认构造函数的时候,不要加()
    //因为下面这行代码,编译器会认为是一个函数的声明,不会认为在创建对象
    //person p1();
    void func();
    // cout << "p2的年龄为" << p2.age << endl;
    // cout << "p3的年龄为" << p3.age << endl;
    // 2.显示法
    // person p1;
    // person p2 = person(10);//有参构造
    // person p3 = person(p2);
    // person(10);//匿名对象 特点:当前行执行结束后,系统会立即回收匿名对象
    // cout << "aaa" << endl;
    //注意事项2
    //不要利用拷贝构造函数 初始化匿名对象 编译器会认为person(p3)===person p3;
    //person(p3);
    // 3.隐式转换法
    person p4 = 10; //相当于person p4 = person(10);有参构造
    person p5 = p4;
}
int main()
{
    test01();
    system("pause");
    return 0;
}
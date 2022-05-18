#include <iostream>
using namespace std;
class person
{
    public:
    person(int age)
    {
        //this指针指向被调用的成员函数所属的对象
        this->age = age;
    }
    person& personaddage(person &p)
    {
        this->age += p.age;
        //this指向p2的指针,而*this指向的就是p2这个对象本体
        return *this;
    }
    int age;
};
//1.解决名称冲突
void test01()
{
    person p1(18);
    cout << "p1的年龄为:" << p1.age << endl;
}
//2.返回对象本身用*this
void test02()
{
    person p1(10);
    person p2(10);
    //链式编程思想
    p2.personaddage(p1).personaddage(p1).personaddage(p1);
    cout << "p2的年龄为:" << p2.age << endl;
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;
class person
{
    public:
    person(int age)
    {
        this->age = age;
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
int main()
{
    test01();
    system("pause");
    return 0;
}
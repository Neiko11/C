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
//1.������Ƴ�ͻ
void test01()
{
    person p1(18);
    cout << "p1������Ϊ:" << p1.age << endl;
}
//2.���ض�������*this
int main()
{
    test01();
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;
class person
{
    public:
    person(int age)
    {
        //thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
        this->age = age;
    }
    person& personaddage(person &p)
    {
        this->age += p.age;
        //thisָ��p2��ָ��,��*thisָ��ľ���p2���������
        return *this;
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
void test02()
{
    person p1(10);
    person p2(10);
    //��ʽ���˼��
    p2.personaddage(p1).personaddage(p1).personaddage(p1);
    cout << "p2������Ϊ:" << p2.age << endl;
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}
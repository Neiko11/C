#include <iostream>
using namespace std;
class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();  //��visit�������Է���Building��˽�г�Ա
    void visit2(); //��visit2���������Է���Building��˽�г�Ա
    Building *building;
};
class Building
{
    //���߱�����GoodGay���µ�visit��Ա������Ϊ����ĺ�����,���Է���˽�г�Ա
    friend void GoodGay::visit();

public:
    Building();

public:
    string m_sittingroom;

private:
    string m_bedroom;
};
Building::Building()
{
    m_sittingroom = "����";
    m_bedroom = "����";
}
GoodGay::GoodGay()
{
    building = new Building;
}
void GoodGay::visit()
{
    cout << "visit���ڷ���:" << building->m_sittingroom << endl;
    cout << "visit���ڷ���:" << building->m_bedroom << endl;
}
void GoodGay::visit2()
{
    // cout << "visit2���ڷ���:" << building->m_bedroom << endl;
    cout << "visit2���ڷ���:" << building->m_sittingroom << endl;
}
void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
}
int main()
{
    test01();
    system("pause");
    return 0;
}
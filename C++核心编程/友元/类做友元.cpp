#include <iostream>
using namespace std;
class Building;
class Goodgay
{
public:
    Goodgay();
    void visit(); //参观函数访问building中的属性
    Building *building;
};
class Building
{
    friend class Goodgay;

public:
    Building();

public:
    string m_sittingroom;

private:
    string m_bedroom;
};
//类外写成员函数
Building::Building()
{
    m_sittingroom = "客厅";
    m_bedroom = "卧室";
}
Goodgay::Goodgay()
{
    //创建建筑物对象
    building = new Building;
}
void Goodgay::visit()
{
    cout << "好基友类正在访问:" << building->m_sittingroom << endl;
    cout << "好基友类正在访问:" << building->m_bedroom << endl;
}
void test01()
{
    Goodgay gg;
    gg.visit();
}
int main()
{
    test01();
    system("pause");
    return 0;
}
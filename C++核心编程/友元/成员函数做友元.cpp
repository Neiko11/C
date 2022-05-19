#include <iostream>
using namespace std;
class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();  //让visit函数可以访问Building中私有成员
    void visit2(); //让visit2函数不可以访问Building中私有成员
    Building *building;
};
class Building
{
    //告诉编译器GoodGay类下的visit成员函数作为本类的好朋友,可以访问私有成员
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
    m_sittingroom = "客厅";
    m_bedroom = "卧室";
}
GoodGay::GoodGay()
{
    building = new Building;
}
void GoodGay::visit()
{
    cout << "visit正在访问:" << building->m_sittingroom << endl;
    cout << "visit正在访问:" << building->m_bedroom << endl;
}
void GoodGay::visit2()
{
    // cout << "visit2正在访问:" << building->m_bedroom << endl;
    cout << "visit2正在访问:" << building->m_sittingroom << endl;
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
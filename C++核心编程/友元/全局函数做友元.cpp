#include <iostream>
using namespace std;
class building
{
    // goodgay全局函数是building好朋友,可以访问budilding中私有成员
    friend void goodgay(building *building);

public:
    building()
    {
        m_sittingroom = "客厅";
        m_bedroom = "卧室";
    }

public:
    string m_sittingroom;

private:
    string m_bedroom;
};
//全局函数
void goodgay(building *building)
{
    cout << "好基友全局函数正在访问:" << building->m_sittingroom << endl;
    cout << "好基友全局函数正在访问:" << building->m_bedroom << endl;
}
void test01()
{
    building building;
    goodgay(&building);
}
int main()
{
    test01();
    system("pause");
    return 0;
}
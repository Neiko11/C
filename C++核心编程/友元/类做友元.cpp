#include <iostream>
using namespace std;
class Building;
class Goodgay
{
public:
    Goodgay();
    void visit(); //�ιۺ�������building�е�����
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
//����д��Ա����
Building::Building()
{
    m_sittingroom = "����";
    m_bedroom = "����";
}
Goodgay::Goodgay()
{
    //�������������
    building = new Building;
}
void Goodgay::visit()
{
    cout << "�û��������ڷ���:" << building->m_sittingroom << endl;
    cout << "�û��������ڷ���:" << building->m_bedroom << endl;
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
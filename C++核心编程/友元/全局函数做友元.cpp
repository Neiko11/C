#include <iostream>
using namespace std;
class building
{
    // goodgayȫ�ֺ�����building������,���Է���budilding��˽�г�Ա
    friend void goodgay(building *building);

public:
    building()
    {
        m_sittingroom = "����";
        m_bedroom = "����";
    }

public:
    string m_sittingroom;

private:
    string m_bedroom;
};
//ȫ�ֺ���
void goodgay(building *building)
{
    cout << "�û���ȫ�ֺ������ڷ���:" << building->m_sittingroom << endl;
    cout << "�û���ȫ�ֺ������ڷ���:" << building->m_bedroom << endl;
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
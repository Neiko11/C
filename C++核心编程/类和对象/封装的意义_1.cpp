#include <iostream>
using namespace std;
//��Ƽ�һ��Բ��,��Բ�ܳ�
//�ܳ���ʽ:2*PI*�뾶
const double PI = 3.14;

class Circle
{
    //����Ȩ��
    //����Ȩ��
public:
    //����
    //�뾶
    int m_r;
    //��Ϊ
    //��ȡԲ�ܳ�
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};
int main()
{
    //ͨ��Բ�� ���������Բ(����)
    //ʵ����(ͨ��һ���ഴ��һ������Ĺ���)
    Circle c1;
    //��Բ��������Խ��и�ֵ
    c1.m_r = 10;
    cout << "Բ���ܳ�Ϊ: " << c1.calculateZC() << endl;
    system("pause");
    return 0;
}
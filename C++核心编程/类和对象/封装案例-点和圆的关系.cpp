#include <iostream>
using namespace std;
//����
class point
{
public:
    void setx(int x)//���õ�x����
    {
        m_x = x;
    }
    int getx()//��ȡ��x����
    {
        return m_x;
    }
    void sety(int y)//���õ�y����
    {
        m_y = y;
    }
    int gety()//��ȡ��y����
    {
        return m_y;
    }

private:
    int m_x;//x����
    int m_y;//y����
};
//Բ��
class circle
{
    public:
    void setr(int r)//����Բ�뾶
    {
        m_r = r;
    }
    int getr()//��ȡԲ�뾶
    {
        return m_r;
    }
    void setcenter(point center)//����Բ�ĵ�����
    {
        m_center = center;
    }
    point getcenter()//��ȡԲ�ĵ�����
    {
        return m_center;
    }

private:
    int m_r;//Բ�뾶
    point m_center;//Բ�ĵ�����
};
//�жϵ���Բ�Ĺ�ϵ
void isincircle(circle &c, point &p)
{
    int distance =
        (c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
        (c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
    int rdistance = c.getr() * c.getr();
    if(distance == rdistance)
    {
        cout << "����Բ��" << endl;
    }
    else if(distance > rdistance)
    {
        cout << "����Բ��" << endl;
    }
    else
    {
        cout << "����Բ��" << endl;
    }
}
int main()
{
    circle c1;//����Բc1
    c1.setr(10);//����Բ�뾶
    point center;//����Բ��
    center.setx(10);//����Բ��x����
    center.sety(0);//����Բ��y����
    c1.setcenter(center);//��Բ�����괫��Բ����
    point p1;//�����p1
    p1.setx(10);//���õ�x����
    p1.sety(9);//���õ�y����
    isincircle(c1, p1);
    system("pause");
    return 0;
}
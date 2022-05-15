#include <iostream>
using namespace std;
//点类
class point
{
public:
    void setx(int x)//设置点x坐标
    {
        m_x = x;
    }
    int getx()//获取点x坐标
    {
        return m_x;
    }
    void sety(int y)//设置点y坐标
    {
        m_y = y;
    }
    int gety()//获取点y坐标
    {
        return m_y;
    }

private:
    int m_x;//x坐标
    int m_y;//y坐标
};
//圆类
class circle
{
    public:
    void setr(int r)//设置圆半径
    {
        m_r = r;
    }
    int getr()//获取圆半径
    {
        return m_r;
    }
    void setcenter(point center)//设置圆心点坐标
    {
        m_center = center;
    }
    point getcenter()//获取圆心点坐标
    {
        return m_center;
    }

private:
    int m_r;//圆半径
    point m_center;//圆心点坐标
};
//判断点与圆的关系
void isincircle(circle &c, point &p)
{
    int distance =
        (c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
        (c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
    int rdistance = c.getr() * c.getr();
    if(distance == rdistance)
    {
        cout << "点在圆上" << endl;
    }
    else if(distance > rdistance)
    {
        cout << "点在圆外" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}
int main()
{
    circle c1;//定义圆c1
    c1.setr(10);//设置圆半径
    point center;//定义圆心
    center.setx(10);//设置圆心x坐标
    center.sety(0);//设置圆心y坐标
    c1.setcenter(center);//将圆心坐标传给圆属性
    point p1;//定义点p1
    p1.setx(10);//设置点x坐标
    p1.sety(9);//设置点y坐标
    isincircle(c1, p1);
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;
//设计及一个圆类,求圆周长
//周长公式:2*PI*半径
const double PI = 3.14;

class Circle
{
    //访问权限
    //公共权限
public:
    //属性
    //半径
    int m_r;
    //行为
    //获取圆周长
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};
int main()
{
    //通过圆类 创建具体的圆(对象)
    //实例化(通过一个类创建一个对象的过程)
    Circle c1;
    //给圆对象的属性进行赋值
    c1.m_r = 10;
    cout << "圆的周长为: " << c1.calculateZC() << endl;
    system("pause");
    return 0;
}
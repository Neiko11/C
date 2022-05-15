#include <iostream>
using namespace std;
class cube
{
public:
    void setl(int l)
    {
        m_l = l;
    }
    int getl()
    {
        return m_l;
    }
    void setw(int w)
    {
        m_w = w;
    }
    int getw()
    {
        return m_w;
    }
    void seth(int h)
    {
        m_h = h;
    }
    int geth()
    {
        return m_h;
    }
    int calculateS()
    {
        return 2 * m_l * m_w + 2 * m_w * m_h + 2 * m_l * m_h;
    }
    int calculateV()

    {
        return m_l * m_h * m_w;
    }
    bool issamebyclass(cube &c)
    {
        if (m_l == c.getl() && m_w == c.getw() && m_h == c.getw())
        {
            return true;
        }
        return false;
    }

private:
    int m_l;
    int m_h;
    int m_w;
};

bool issame(cube &c1, cube &c2)
{
    if (c1.getl() == c2.getl() && c1.getw() == c2.getw() && c1.geth() == c2.geth())
    {
        return true;
    }
    return false;
}
int main()
{
    cube c1;
    c1.setl(10);
    c1.seth(10);
    c1.setw(10);
    cout << "立方体面积为: " << c1.calculateS() << endl;
    cout << "立方体体积为: " << c1.calculateV() << endl;
    cube c2;
    c2.setl(10);
    c2.seth(10);
    c2.setw(11);
    bool ret = issame(c1, c2);
    if(ret)
    {
        cout << "c1 c2是相等的" << endl;
    }
    else
    {
        cout << "c1 c2不相等" << endl;
    }
    ret = c1.issamebyclass(c2);
    if(ret)
    {
        cout << "成员函数判断c1 c2是相等的" << endl;
    }
    else
    {
        cout << "成员函数判断c1 c2不相等" << endl;
    }
    system("pause");
    return 0;
}
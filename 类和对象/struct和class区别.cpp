#include <iostream>
using namespace std;
class c1
{
    int m_a;//默认权限私有
};
struct c2
{
    int m_a;//默认权限公共
};
int main()
{
    //struct默认权限公共public
    //class默认权限私有private
    c1 c1;
    c1.m_a = 100;//class默认私有,类外不可访问
    c2 c2;
    c2.m_a = 100;
    system("pause");
    return 0;
}
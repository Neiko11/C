#include <iostream>
using namespace std;
class c1
{
    int m_a;//Ĭ��Ȩ��˽��
};
struct c2
{
    int m_a;//Ĭ��Ȩ�޹���
};
int main()
{
    //structĬ��Ȩ�޹���public
    //classĬ��Ȩ��˽��private
    c1 c1;
    c1.m_a = 100;//classĬ��˽��,���ⲻ�ɷ���
    c2 c2;
    c2.m_a = 100;
    system("pause");
    return 0;
}
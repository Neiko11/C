#include <iostream>
using namespace std;
class myprint
{
public:
    //���غ������������
    void operator()(string test)
    {
        cout << test << endl;
    }
};
void myprint02(string test)
{
    cout << test << endl;
}
void test01()
{
    myprint myprint;
    myprint("hello world"); //����ʹ�������ǳ������ں�������,��˳�Ϊ�º���
    myprint02("hello world");
}
// �º����ǳ����,û�й̶���д��
class Myadd
{
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};
void test02()
{
    Myadd myadd;
    int ret = myadd(100, 100);
    cout << ret << endl;
    // ������������
    cout << Myadd()(100, 100) << endl;
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}
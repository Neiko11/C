#include <iostream>
using namespace std;

//1.������Ϊ���ص�����
void fun(int& a)
{
    cout << "fun(int& a)����" << endl;
}

void fun(const int& a)
{
    cout << "fun(const int& a)����" << endl;
}

//2.������������Ĭ�ϲ���
void fun2(int a,int b = 10)
{
    cout << "fun2(int a,int b)����" << endl;
}

void fun2(int a)
{
    cout << "fun2(int a)����" << endl;
}

int main()
{
    int a = 10;
    fun(a);//����fun(int& a)
    fun(10);//����fun(const int& a)
    //fun2(20);//��������������Ĭ�ϲ���,���ֶ����Ա���,���������������
    fun2(10, 20);
    system("pause");
    return 0;
}
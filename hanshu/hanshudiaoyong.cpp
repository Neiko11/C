#include <iostream>
using namespace std;

//���������ʱ��num1��num2��û����ʵ���ݣ�ֻ��һ����ʽ�ϵĲ���������β�
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    //a��b��Ϊʵ�ʲ��������ʵ��
    //�����ú���ʱ��ʵ�ε�ֵ�ᴫ���β�
    int a = 10;
    int b = 20;
    int c = add (a,b);
    cout << c << endl;
    return 0;
}
#include <iostream>
using namespace std;

//��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ�����β�
//ֵ����ʱ������βη����ı䣬������Ӱ��ʵ��
//���庯����ʵ���������ֽ��н�������
//�����������Ҫ����ֵ��������ʱ�����дvoid
void swap(int num1, int num2)
{
    cout << "����ǰ��" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "������" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}
int main()
{
    int a = 10;
    int b = 20;
    //��������ֵ���ݵ�ʱ�򣬺������βη����ı䣬������Ӱ��ʵ��
    swap(a, b);
    cout << "a = " << a << "b = " << b << endl;
    return 0;
}
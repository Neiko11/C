#include <iostream>
using namespace std;

int main()
{
    //1.����ͨ��������ͳ����������ռ���ڴ��С
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "��������ռ���ڴ�ռ�Ϊ�� " << sizeof(arr) << endl;
    cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ: " << sizeof(arr[0]) << endl;
    cout << "������Ԫ�ظ���Ϊ: " << sizeof(arr) / sizeof(arr[0]) << endl;

    //2.����ͨ���������Ʋ鿴�����׵�ַ
    cout << "�����׵�ַΪ: "  << arr << endl;
    cout << "�����е�һ��Ԫ�ص�ַΪ: " << &arr[0] << endl;
    cout << "�����еڶ���Ԫ�ص�ַΪ: " << &arr[1] << endl;
    //�������ǳ����������Խ��и�ֵ����
    return 0;
}
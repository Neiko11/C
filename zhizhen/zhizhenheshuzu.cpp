#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
	int* p = arr;//���������������׵�ַ
	cout << "����ָ����ʵ�һ��Ԫ�أ�" << *p << endl;
	p++;//��ָ�����ƫ��4���ֽ�
	cout << "����ָ����ʵڶ���Ԫ�أ�" << *p << endl;
	cout << "����ָ��������飺" << endl;
	int* p2 = arr;
	for (int i = 0; i < 9; i++)
	{
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}
//new������
#include <iostream>
using namespace std;
int* func()
{
	int* a = new int(10);
	return a;
}

void test01()
{
	int* a = func();
	cout << *a << endl;
	cout << *a << endl;
	cout << *a << endl;
	delete a;
	//cout << *a << endl;//�ڴ��ѱ��ͷţ��ٴη��ʾ��ǷǷ��������ᱨ����
}

void test02()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete[]arr;//�ͷ�����
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
//��������������ֵ
#include <iostream>
using namespace std;
//�����������ķ���ֵ
//1.��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;
	return a;
}

//�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10;//��̬�����������ȫ������ȫ���������ڳ��������ϵͳ�ͷ�
	return a;
}
int main()
{
	int& ref = test01();//�����÷�
	cout << "ref = " << ref << endl;//��һ�ν����ȷ����Ϊ���������˱���
	cout << "ref = " << ref << endl;//�ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ�
	int& ref2 = test02();
	cout << "ref = " << ref2 << endl;
	cout << "ref = " << ref2 << endl;
	test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ��int& ref = a,int& a = 1000��
	cout << "ref = " << ref2 << endl;
	cout << "ref = " << ref2 << endl;
	system("pause");
	return 0;
}
//���õı���
#include <iostream>
using namespace std;
//���õı��ʾ���һ��ָ�볣��
//����һ����ʼ���󣬾Ͳ����Է����ı�
void func(int& ref)
{
	ref = 100;//ref�����ã�ת��Ϊ*ref = 100
}

int main()
{
	int a = 10;
	int& ref = a;//int* const ref = &a
	ref = 20;//* ref = 20;
	cout << "a= " << a << endl;
	cout << "ref= " << ref << endl;
	func(a);
	

	system("pause");
	return 0;
}
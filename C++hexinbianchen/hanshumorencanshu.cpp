//����Ĭ�ϲ���
#include <iostream>
using namespace std;
//����������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
//ע������
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//2.������������ʵ��ֻ����һ��Ĭ�ϲ���
int func2(int a, int b);
int func2(int a= 20, int b = 20)
{
	return a + b;
}

int main()
{
	
	cout << func2() << endl;

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	//1.const����ָ�� ����ָ��
	const int* p = &a;//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	//*p = 20; ����
	p = &b;
	
	//2.const���γ��� ָ�볣��
	int* const p2 = &a;//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	*p2 = 100;
	//p2 = &b; ����
	
	//3.const���γ�����ָ��
	const int* const p3 = &a;
	//*p3 = 100; ����
	//p3 = &b; ����
	system("pause");
	return 0;
}
//ȫ����
#include <iostream>
using namespace std;
//ȫ�ֱ���
int g_a = 10;
int g_b = 20;
const int cg_a = 10;
const int cg_b = 20;

int main()
{
	//������ͨ�ֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַΪ�� " << (long long)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ�� " << (long long)&b << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ�� " << (long long)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ�� " << (long long)&g_b << endl;

	//��̬����
	static int s_a = 10;
	static int s_b = 20;
	cout << "��̬����s_a�ĵ�ַΪ�� " << (long long)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ�� " << (long long)&s_b << endl;

	//����
	//�ַ�������
	cout << "�ַ��������ĵ�ַΪ�� " << (long long)&"hello world" << endl;
	//const���α���
	//const���ε�ȫ�ֱ������ֲ�����
	cout << "ȫ�ֳ���cg_a�ĵ�ַΪ�� " << (long long)&cg_a << endl;
	cout << "ȫ�ֳ���cg_a�ĵ�ַΪ�� " << (long long)&cg_b << endl;
	
	int cl_a = 10;
	int cl_b = 20;
	cout << "�ֲ�����cl_a�ĵ�ַΪ�� " << (long long)&cl_a << endl;
	cout << "�ֲ�����cl_b�ĵ�ַΪ�� " << (long long)&cl_b << endl;

	system("pause");
	return 0;
}
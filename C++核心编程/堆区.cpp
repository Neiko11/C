#include <iostream>
using namespace std;
//����
int* func()
{
	//ָ�뱾��Ҳ�Ǿֱ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int* p = new int(10);
	return p;
}

int main()
{
	int* p = func();
	cout << *p << endl;

	system("pause");
	return 0;
}
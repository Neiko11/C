//��������
#include <iostream>
using namespace std;
void showvalue(const int& val)
{
	//val = 1000;
	cout << "val= " << val << endl;
}

int main()
{
	int a = 10;
	//int& ref = 10;�����÷������ñ���һ��Ϸ����ڴ�ռ�
	//����const�󣬱������������޸� int temp = 10; const int& ref = temp;
	const int& ref = 10;
	//ref = 20;//����const֮���Ϊֻ���������޸�		 
	int b = 100;
	showvalue(b);
	cout << "b= " << b << endl;

	system("pause");
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

//�﷨��struct �ṹ���� {�ṹ���Ա�б�}

//����ѧ���������ͣ�ѧ�����������������䣬������
struct Student
{
	//��Ա�б�
	//����
	string name;
	//����
	int age;
	//����
	int score;
}s3;//˳�㴴������
//ͨ��ѧ�����ʹ�������ѧ��
int main()
{
	//1.struct �ṹ���� ������
	struct Student s1;//struct�ؼ��ֿ���ʡ��
	//��s1���Ը�ֵ
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << "���䣺" << s1.age << "�ɼ���" << s1.score << endl;
	//2.struct �ṹ���� ������ = {��Ա1ֵ����Ա2ֵ}
	struct Student s2 = { "����",19,80 };
	cout << "������" << s2.name << "���䣺" << s2.age << "�ɼ���" << s2.score << endl;
	//3.����ṹ��ʱ˳�㴴������
	s3.name = "����";
	s3.age = 20;
	s3.score = 90;
	cout << "������" << s3.name << "���䣺" << s3.age << "�ɼ���" << s3.score << endl;

}
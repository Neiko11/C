#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

//��ӡѧ����Ϣ
void printStudent1(struct student s)//ֵ����
{
	s.age = 100;
	cout << "ֵ�����Ӻ��� ������ " << s.name << "���䣺 " << s.age << "�ɼ��� " << s.score << endl;
}

void printStudent2(struct student* s)//��ַ����
{
	s->age = 200;
	cout << "��ַ�����Ӻ��� ������ " << s->name << "���䣺 " << s->age << "�ɼ��� " << s->score << endl;
}

int main()
{
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 100;
	//printStudent1(s);
	printStudent2(&s);
	cout << "main�����д�ӡ ������ " << s.name << "���䣺 " << s.age << "�ɼ��� " << s.score << endl;
	
	system("pause");
	return 0;
}
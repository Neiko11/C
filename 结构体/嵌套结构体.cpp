#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};
 
int main()
{
	teacher t;
	t.id = 20000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 18;
	t.stu.score = 100;
	cout << "��ʦ������" << t.name << "��ʦ��ţ�" << t.id << "��ʦ���䣺" << t.age << endl
		<< "��ʦѧ����������" << t.stu.name << "ѧ�����䣺" << t.stu.age << "ѧ���ɼ���" << t.stu.score << endl;

	system("pause");
	return 0;
}
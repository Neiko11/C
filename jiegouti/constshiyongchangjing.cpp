#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ�
void printStudent(const struct student *s) //const,һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���������
{
	cout << "������ " << s->name << "���䣺 " << s->age << "�ɼ� �� " << s->score << endl;
}

int main()
{
	struct student s = { "����",18,70 };
	printStudent(&s);

	system("pause");
	return 0;
}
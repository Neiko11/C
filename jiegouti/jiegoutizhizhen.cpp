#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

int main()
{
	struct student s = { "����",18,100 };
	struct student* p = &s;
	cout << "������" << p->name 
		<< "���䣺" << (*p).age //(*p).age�൱��p->age
		<< "�ɼ���" << p->score << endl;

	system("pause");
	return 0;
}
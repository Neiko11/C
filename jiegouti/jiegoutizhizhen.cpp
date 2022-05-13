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
	struct student s = { "张三",18,100 };
	struct student* p = &s;
	cout << "姓名：" << p->name 
		<< "年龄：" << (*p).age //(*p).age相当于p->age
		<< "成绩：" << p->score << endl;

	system("pause");
	return 0;
}
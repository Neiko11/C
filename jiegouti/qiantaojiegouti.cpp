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
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 18;
	t.stu.score = 100;
	cout << "老师姓名：" << t.name << "老师编号：" << t.id << "老师年龄：" << t.age << endl
		<< "老师学生的姓名：" << t.stu.name << "学生年龄：" << t.stu.age << "学生成绩：" << t.stu.score << endl;

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

//打印学生信息
void printStudent1(struct student s)//值传递
{
	s.age = 100;
	cout << "值传递子函数 姓名： " << s.name << "年龄： " << s.age << "成绩： " << s.score << endl;
}

void printStudent2(struct student* s)//地址传递
{
	s->age = 200;
	cout << "地址传递子函数 姓名： " << s->name << "年龄： " << s->age << "成绩： " << s->score << endl;
}

int main()
{
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 100;
	//printStudent1(s);
	printStudent2(&s);
	cout << "main函数中打印 姓名： " << s.name << "年龄： " << s.age << "成绩： " << s.score << endl;
	
	system("pause");
	return 0;
}
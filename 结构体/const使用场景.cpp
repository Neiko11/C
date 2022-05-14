#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间
void printStudent(const struct student *s) //const,一旦有修改的操作就会报错，可以防止我们误操作
{
	cout << "姓名： " << s->name << "年龄： " << s->age << "成绩 ： " << s->score << endl;
}

int main()
{
	struct student s = { "张三",18,70 };
	printStudent(&s);

	system("pause");
	return 0;
}
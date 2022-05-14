#include <iostream>
#include <string>
using namespace std;

//语法：struct 结构体名 {结构体成员列表}

//创建学生数据类型：学生包括（姓名，年龄，分数）
struct Student
{
	//成员列表
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}s3;//顺便创建变量
//通过学生类型创建具体学生
int main()
{
	//1.struct 结构体名 变量名
	struct Student s1;//struct关键字可以省略
	//给s1属性赋值
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << "年龄：" << s1.age << "成绩：" << s1.score << endl;
	//2.struct 结构体名 变量名 = {成员1值，成员2值}
	struct Student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << "年龄：" << s2.age << "成绩：" << s2.score << endl;
	//3.定义结构体时顺便创建变量
	s3.name = "王五";
	s3.age = 20;
	s3.score = 90;
	cout << "姓名：" << s3.name << "年龄：" << s3.age << "成绩：" << s3.score << endl;

}
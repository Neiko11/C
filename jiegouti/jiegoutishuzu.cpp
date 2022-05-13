#include <iostream>
#include <string>
using namespace std;

struct Stuent
{
	string name;
	int age;
	int score;
};
int main()
{
	struct Stuent stuArray[3] =
	{
		{"张三",18,100},
		{"李四",19,90},
		{"王五",20,80}
	};
	stuArray[2].name = "赵六";
	stuArray[2].age = 30;
	stuArray[2].score = 70;

	for (int i = 0; i < 3; i++)
	{
		cout << "姓名: " << stuArray[i].name
			<< "年龄：" << stuArray[i].age
			<< "成绩：" << stuArray[i].score << endl;
	}

	system("pause");
	return 0;
}
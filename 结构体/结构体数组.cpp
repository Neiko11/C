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
		{"����",18,100},
		{"����",19,90},
		{"����",20,80}
	};
	stuArray[2].name = "����";
	stuArray[2].age = 30;
	stuArray[2].score = 70;

	for (int i = 0; i < 3; i++)
	{
		cout << "����: " << stuArray[i].name
			<< "���䣺" << stuArray[i].age
			<< "�ɼ���" << stuArray[i].score << endl;
	}

	system("pause");
	return 0;
}
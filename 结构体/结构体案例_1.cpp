#include <iostream>
#include <ctime>
using namespace std;

struct student
{
	string name;
	int score;
};

struct teacher
{
	string name;
	struct student sArray[5];
};

void printinfo(struct teacher tArray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].name
				<< "成绩：" << tArray[i].sArray[j].score << endl;
		}
	}
}

void allocateSpace(struct teacher tArray[], int len)
{
	string nameseed = "ABCDEF";
	for (int i = 0; i < len; i++)
	{
		tArray[i].name = "Teache_";
		tArray[i].name += nameseed[i];
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].name = "Student_";
			tArray[i].sArray[j].name += nameseed[j];
			int randscore = rand() % 61 + 40;//1+40到51+99
			tArray[i].sArray[j].score = randscore;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	struct teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	printinfo(tArray, len);

	system("pause");
	return 0;
}
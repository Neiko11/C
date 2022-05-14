#include <iostream>
using namespace std;

struct hero
{
	string name;
	int age;
	string sex;
};

void bubblesort(hero hArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (hArray[j].age > hArray[j + 1].age)
			{
				hero temp = hArray[j];
				hArray[j] = hArray[j + 1];
				hArray[j + 1] = temp;
			}
		}
	}
}
void printhero(hero hArray[], int len)
{
	for (int i = 0; i < 5; i++)
	{
		cout << hArray[i].name << hArray[i].age << hArray[i].sex << endl;
	}
}
int main()
{
	hero hArray[5] = { {"Áõ±¸",23,"ÄÐ"},
						{"¹ØÓð",22,"ÄÐ"},
						{"ÕÅ·É",20,"ÄÐ"},
						{"ÕÔÔÆ",21,"ÄÐ"},
						{"õõ²õ",19,"Å®"} };
	int len = sizeof(hArray) / sizeof(hArray[0]);
	bubblesort(hArray, len);
	printhero(hArray, len);

	system("pause");
	return 0;
}
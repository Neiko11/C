#include <iostream>
using namespace std;
#define MAX 1000//通讯录最大人数

void showMenu()
{
	cout << "****************************" << endl;
	cout << "*****   1.添加联系人   *****" << endl;
	cout << "*****   2.显示联系人   *****" << endl;
	cout << "*****   3.删除联系人   *****" << endl;
	cout << "*****   4.查找联系人   *****" << endl;
	cout << "*****   5.修改联系人   *****" << endl;
	cout << "*****   6.清空联系人   *****" << endl;
	cout << "*****   0.退出联系人   *****" << endl;
	cout << "****************************" << endl;
}
//联系人结构体
struct contact
{
	string name;//姓名
	int sex = 0;//性别 1男 2女
	int age = 0;//年龄
	string telephone;//电话
	string address;//住址
};

//通讯录结构体
struct addressbooks
{
	struct contact contactArrary[MAX];//联系人数组
	int size = 0;//通讯录人数
};

//添加联系人
void addcontact(addressbooks* abs)
{
	//判断通讯录是否已满，如果满了就不在添加
	if (abs->size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->contactArrary[abs->size].name = name;
		//性别
		cout << "请输入性别: 1.男 2.女：" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			//如果输入1或2可以退出循环，否则重新输入
			if (sex == 1 || sex == 2)
			{
				abs->contactArrary[abs->size].sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->contactArrary[abs->size].age = age;
		//电话
		cout << "请输入联系电话： " << endl;
		string telephone;
		cin >> telephone;
		abs->contactArrary[abs->size].telephone = telephone;
		//地址
		cout << "请输入地址： " << endl;
		string address;
		cin >> address;
		abs->contactArrary[abs->size].address = address;
		//更新人数
		abs->size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}

//显示联系人
void showcontact(addressbooks* abs)
{
	//判断通讯录中人数是否为0，为0显示为空，不为0显示联系人
	if (abs->size == 0)
	{
		cout << "当前记录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "姓名： " << abs->contactArrary[i].name << "\t"
				<< "性别： " << (abs->contactArrary[i].sex == 1 ? "男" : "女") << "\t"
				<< "年龄： " << abs->contactArrary[i].age << "\t"
				<< "电话： " << abs->contactArrary[i].telephone << "\t"
				<< "地址： " << abs->contactArrary[i].address << endl;
		}
		system("pause");
		system("cls");
	}
}

//检测联系人是否存在
int detectcontact(addressbooks* abs, string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->contactArrary[i].name == name)
		{
			return i; //若存在return跳出函数并返回i
		}
	}
	return -1;//不存在返回-1
}

//删除联系人
void deletecontact(addressbooks* abs)
{
	string name;
	cin >> name;
	int ret = detectcontact(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->size; i++)
		{
			//数据迁移
			abs->contactArrary[i] = abs->contactArrary[i + 1];
		}
		abs->size--;//更新人员数
		cout << "删除成功" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "查无此人" << endl;
		system("pause");
		system("cls");
	}
}

//查找联系人
void searchcontact(addressbooks* abs)
{
	string name;
	cin >> name;
	int ret = detectcontact(abs, name);
	if (ret != -1)
	{
		cout << "姓名： " << abs->contactArrary[ret].name << "\t"
			<< "性别： " << (abs->contactArrary[ret].sex == 1 ? "男" : "女") << "\t"
			<< "年龄： " << abs->contactArrary[ret].age << "\t"
			<< "电话： " << abs->contactArrary[ret].telephone << "\t"
			<< "地址： " << abs->contactArrary[ret].address << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//修改联系人
void revisecontact(addressbooks* abs)
{
	string name;
	cin >> name;
	int ret = detectcontact(abs, name);
	if (ret != -1)
	{
		cout << "请输入新的姓名： " << endl;
		cin >> abs->contactArrary[ret].name;
		cout << "请输入新的性别：1.男 2.女 " << endl;
		while (true)
		{
			int sex;
			cin >> sex;
			//如果输入1或2可以退出循环，否则重新输入
			if (sex == 1 || sex == 2)
			{
				abs->contactArrary[abs->size].sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		cout << "请输入新的年龄： " << endl;
		cin >> abs->contactArrary[ret].age;
		cout << "请输入新的电话： " << endl;
		cin >> abs->contactArrary[ret].telephone;
		cout << "请输入新的地址： " << endl;
		cin >> abs->contactArrary[ret].address;
		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//清空所有联系人
void cleancontact(addressbooks*abs)
{
	abs->size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{
	//创建通讯录结构体变量
	struct addressbooks abs;
	abs.size = 0;

	int select = 0;//创建用户选择输入的变量

	while (true)
	{
		//菜单调用
		showMenu();
		cin >> select;

		switch (select)
		{
		case 1://添加联系人
			addcontact(&abs);//利用地址
			break;
		case 2://显示联系人
			showcontact(&abs);
			break;
		case 3://删除联系人
			cout << "请输入删除联系人姓名： " << endl;
			deletecontact(&abs);
			break;
		case 4://查找联系人
			cout << "请输入查找联系人姓名： " << endl;
			searchcontact(&abs);
			break;
		case 5://修改联系人
			cout << "请输入修改联系人姓名： " << endl;
			revisecontact(&abs);
			break;
		case 6://清空联系人
			cleancontact(&abs);
			break;
		case 0://退出联系人
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		}
	}

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
#define MAX 1000//ͨѶ¼�������

void showMenu()
{
	cout << "****************************" << endl;
	cout << "*****   1.�����ϵ��   *****" << endl;
	cout << "*****   2.��ʾ��ϵ��   *****" << endl;
	cout << "*****   3.ɾ����ϵ��   *****" << endl;
	cout << "*****   4.������ϵ��   *****" << endl;
	cout << "*****   5.�޸���ϵ��   *****" << endl;
	cout << "*****   6.�����ϵ��   *****" << endl;
	cout << "*****   0.�˳���ϵ��   *****" << endl;
	cout << "****************************" << endl;
}
//��ϵ�˽ṹ��
struct contact
{
	string name;//����
	int sex = 0;//�Ա� 1�� 2Ů
	int age = 0;//����
	string telephone;//�绰
	string address;//סַ
};

//ͨѶ¼�ṹ��
struct addressbooks
{
	struct contact contactArrary[MAX];//��ϵ������
	int size = 0;//ͨѶ¼����
};

//�����ϵ��
void addcontact(addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->contactArrary[abs->size].name = name;
		//�Ա�
		cout << "�������Ա�: 1.�� 2.Ů��" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			//�������1��2�����˳�ѭ����������������
			if (sex == 1 || sex == 2)
			{
				abs->contactArrary[abs->size].sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->contactArrary[abs->size].age = age;
		//�绰
		cout << "��������ϵ�绰�� " << endl;
		string telephone;
		cin >> telephone;
		abs->contactArrary[abs->size].telephone = telephone;
		//��ַ
		cout << "�������ַ�� " << endl;
		string address;
		cin >> address;
		abs->contactArrary[abs->size].address = address;
		//��������
		abs->size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}

//��ʾ��ϵ��
void showcontact(addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0��Ϊ0��ʾΪ�գ���Ϊ0��ʾ��ϵ��
	if (abs->size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "������ " << abs->contactArrary[i].name << "\t"
				<< "�Ա� " << (abs->contactArrary[i].sex == 1 ? "��" : "Ů") << "\t"
				<< "���䣺 " << abs->contactArrary[i].age << "\t"
				<< "�绰�� " << abs->contactArrary[i].telephone << "\t"
				<< "��ַ�� " << abs->contactArrary[i].address << endl;
		}
		system("pause");
		system("cls");
	}
}

//�����ϵ���Ƿ����
int detectcontact(addressbooks* abs, string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->contactArrary[i].name == name)
		{
			return i; //������return��������������i
		}
	}
	return -1;//�����ڷ���-1
}

//ɾ����ϵ��
void deletecontact(addressbooks* abs)
{
	string name;
	cin >> name;
	int ret = detectcontact(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->size; i++)
		{
			//����Ǩ��
			abs->contactArrary[i] = abs->contactArrary[i + 1];
		}
		abs->size--;//������Ա��
		cout << "ɾ���ɹ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "���޴���" << endl;
		system("pause");
		system("cls");
	}
}

//������ϵ��
void searchcontact(addressbooks* abs)
{
	string name;
	cin >> name;
	int ret = detectcontact(abs, name);
	if (ret != -1)
	{
		cout << "������ " << abs->contactArrary[ret].name << "\t"
			<< "�Ա� " << (abs->contactArrary[ret].sex == 1 ? "��" : "Ů") << "\t"
			<< "���䣺 " << abs->contactArrary[ret].age << "\t"
			<< "�绰�� " << abs->contactArrary[ret].telephone << "\t"
			<< "��ַ�� " << abs->contactArrary[ret].address << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//�޸���ϵ��
void revisecontact(addressbooks* abs)
{
	string name;
	cin >> name;
	int ret = detectcontact(abs, name);
	if (ret != -1)
	{
		cout << "�������µ������� " << endl;
		cin >> abs->contactArrary[ret].name;
		cout << "�������µ��Ա�1.�� 2.Ů " << endl;
		while (true)
		{
			int sex;
			cin >> sex;
			//�������1��2�����˳�ѭ����������������
			if (sex == 1 || sex == 2)
			{
				abs->contactArrary[abs->size].sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		cout << "�������µ����䣺 " << endl;
		cin >> abs->contactArrary[ret].age;
		cout << "�������µĵ绰�� " << endl;
		cin >> abs->contactArrary[ret].telephone;
		cout << "�������µĵ�ַ�� " << endl;
		cin >> abs->contactArrary[ret].address;
		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//���������ϵ��
void cleancontact(addressbooks*abs)
{
	abs->size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main()
{
	//����ͨѶ¼�ṹ�����
	struct addressbooks abs;
	abs.size = 0;

	int select = 0;//�����û�ѡ������ı���

	while (true)
	{
		//�˵�����
		showMenu();
		cin >> select;

		switch (select)
		{
		case 1://�����ϵ��
			addcontact(&abs);//���õ�ַ
			break;
		case 2://��ʾ��ϵ��
			showcontact(&abs);
			break;
		case 3://ɾ����ϵ��
			cout << "������ɾ����ϵ�������� " << endl;
			deletecontact(&abs);
			break;
		case 4://������ϵ��
			cout << "�����������ϵ�������� " << endl;
			searchcontact(&abs);
			break;
		case 5://�޸���ϵ��
			cout << "�������޸���ϵ�������� " << endl;
			revisecontact(&abs);
			break;
		case 6://�����ϵ��
			cleancontact(&abs);
			break;
		case 0://�˳���ϵ��
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		}
	}

	system("pause");
	return 0;
}
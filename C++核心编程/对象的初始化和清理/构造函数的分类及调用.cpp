#include <iostream>
using namespace std;
//1.���캯���ķ��༰����
//����
//���ղ�������  �޲ι�����вι���
//�������ͷ��� ��ͨ����Ϳ�������
class person
{
    public:
    person()
    {
        cout << "person���޲ι��캯���ĵ���" << endl;
    }
    person(int a)
    {
        age = a;
        cout << "person���вι��캯���ĵ���" << endl;
    }
    //�������캯��
    person(const person& p)
    {
        cout << "person�Ŀ������캯���ĵ���" << endl;
        age = p.age;
    }
    int age;
    ~person()
    {
        cout << "person������������" << endl;
    }
};

//����
void test01()
{
    // //1.���ŷ�
    // person p;
    // person p2(10);//�вι��캯��
    // person p3(p2);//�������캯��
    //ע������1
    //����Ĭ�Ϲ��캯����ʱ��,��Ҫ��()
    //��Ϊ�������д���,����������Ϊ��һ������������,������Ϊ�ڴ�������
    //person p1();
    void func();
    // cout << "p2������Ϊ" << p2.age << endl;
    // cout << "p3������Ϊ" << p3.age << endl;
    // 2.��ʾ��
    // person p1;
    // person p2 = person(10);//�вι���
    // person p3 = person(p2);
    // person(10);//�������� �ص�:��ǰ��ִ�н�����,ϵͳ������������������
    // cout << "aaa" << endl;
    //ע������2
    //��Ҫ���ÿ������캯�� ��ʼ���������� ����������Ϊperson(p3)===person p3;
    //person(p3);
    // 3.��ʽת����
    person p4 = 10; //�൱��person p4 = person(10);�вι���
    person p5 = p4;
}
int main()
{
    test01();
    system("pause");
    return 0;
}
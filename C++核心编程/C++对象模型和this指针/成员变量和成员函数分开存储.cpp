#include <iostream>
using namespace std;
class person
{
    int m_a;//�Ǿ�̬��Ա����������Ķ�����
    static int m_b;//��̬��Ա�����������������
    void func(){}//�Ǿ�̬��Ա����
    static void func2(){}//��̬��Ա�����������������
};
int person::m_b = 0;
void test01()
{
    person p;
    // C++���������ÿ���ն���Ҳ����һ���ֽڿռ�,��Ϊ�����ֿն���ռ�ڴ��λ��
    //ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
    cout << "sizeof(p) = " << sizeof(p) << endl;
}
void test02()
{
    person p;
    cout << "sizeof(p) = " << sizeof(p) << endl;
}
int main()
{
    //test01();
    test02();
    system("pause");
    return 0;
}
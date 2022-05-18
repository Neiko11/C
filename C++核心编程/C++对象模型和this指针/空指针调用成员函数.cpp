#include <iostream>
using namespace std;
class person
{
    public:
    void showclassname()
    {
        cout << "这是person类" << endl;
    }
    void showpersonage()
    {
        // 报错原因是因为传入的指针是为空
        if(this == NULL)//解决报错
        {
            return;
        }
        cout << "age = " << m_age << endl;
    }
    int m_age;
};
void test01()
{
    person *p = NULL;
    p->showclassname();
    p->showpersonage();
}
int main()
{
    test01();
    system("pause");
    return 0;
}
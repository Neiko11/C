#include <iostream>
using namespace std;
class person
{
public:
    person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    bool operator==(person &p)
    {
        if (this->m_name == p.m_name && this->m_age == p.m_age)
        {
            return true;
        }
        return false;
    }
    bool operator!=(person &p)
    {
        if (this->m_name != p.m_name && this->m_age != p.m_age)
        {
            return false;
        }
        return true;
    }
    string m_name;
    int m_age;
};
void test01()
{
    person p1("tom", 18);
    person p2("tom", 18);
    if (p1 != p2)
    {
        cout << "p1和p2是相等的" << endl;
    }
    else
    {
        cout << "p1和p2是不行等的" << endl;
    }
}
int main()
{
    test01();
    system("pause");
    return 0;
}
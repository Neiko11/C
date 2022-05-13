#include <iostream>
using namespace std;

int main()
{
    // 1.数据类型 数组名[数组长度]；
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << arr[1] << endl;

    // 2.数据类型 数组名[数组长度] = {值1，值2....};
    //如果再初始化数据时候，没有全部填写完，会用0来填补剩余数据
    int arr2[5] = {10, 20, 30};
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }

    // 3.数据类型 数组名[] = {值1，值2....};
    //定义数组的时候，必须有初始长度
    int arr3[] = {90,80,70,60,50,40,30,20,10};
    for (int i =0; i < 9; i++)
    {
        cout << arr3[i] << endl;
    }
    return 0;
}
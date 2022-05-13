#include <iostream>
using namespace std;

int main_1()
{
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    for (int i = 0; i < 8; i++)//排序次数
    {
        for (int j = 0; j < 8 - i; j++)//对比次数
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i];
    }
    return 0;
}
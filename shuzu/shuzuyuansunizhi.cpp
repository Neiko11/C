#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 2, 5, 4};
    int start = 0;                              //数组起始下标
    int end = sizeof(arr) / sizeof(arr[0]) - 1; //数组末尾下标
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;//起始下标更新
        end--;//末尾下标更新
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
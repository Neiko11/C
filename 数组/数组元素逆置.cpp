#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 2, 5, 4};
    int start = 0;                              //������ʼ�±�
    int end = sizeof(arr) / sizeof(arr[0]) - 1; //����ĩβ�±�
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;//��ʼ�±����
        end--;//ĩβ�±����
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
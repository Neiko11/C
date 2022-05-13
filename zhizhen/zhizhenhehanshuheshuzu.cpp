#include <iostream>
#include "bubbleSort.h"
using namespace std;
//´òÓ¡Êý×é
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << *arr << endl;
		arr++;
	}
}
int main()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	printArray(arr, len);

	system("pause");
	return 0;
}
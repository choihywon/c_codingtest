#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;
void bubble_sorting(int arr[], int cnt);
void quick_sort(int arr[], int start, int end);

int main()
{
	int num=0;
	int* arr = new int[num];

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	quick_sort(arr, 0, num);
}

void quick_sort(int arr[], int start, int end)
{
	if (start >= end)
		return;
	int pivot = start;
	int i = pivot + 1;
	int j = end;
	int tmp;

	while (i <= j)
	{
		while (i <= end && arr[i] <= arr[pivot])
			i++;
		while (j > start && arr[i] >= arr[pivot])
			j--;
		if (i > j)
		{
			tmp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = tmp;
		}
		else
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	quick_sort(arr, start, j - 1);
	quick_sort(arr, j + 1, end);
}
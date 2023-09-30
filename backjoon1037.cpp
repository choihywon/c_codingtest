#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include<stdlib.h>


using namespace std;

int main(void)
{
	int cnt = 0;
	int *arr1;
	int num2 = 0;


	cout << "count :" << endl;
	cin >> cnt;

	arr1 = (int*)calloc(cnt, sizeof(int));
	
	for (int i = 0; i < cnt; i++)
	{
		cin >> arr1[i];
	}
		
	

}
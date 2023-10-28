#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n = 0;
	int num = 0;
	float arr[] = {3.2,5.0,1.5,2.0,7.0,7.7,8.2,10.3,5.5, 9.3,4.9,6.1,3.3,5.3};
//	int ch[] = {0,};
//	float chin = arr[0][0];
//	float chen = arr[0][1];
//	ch[0][0] = arr[0][0];
//	ch[0][1] = arr[0][1];
	
	float min = arr[0];
	float max = arr[0];
		
	

	for (int i = 0; i < 14; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	int sum = (max - min + 1)*10;
	printf("%d\n", sum);
	int* ch = (int*)calloc(sum, sizeof(int));
	//int result[7] = {0,};
	//float(int*)malloc(sizeof(int) * max*10);
	float length = 0;

	

	for (int i = 0; i < 12; i += 2)
	{
		int start = ((int)(arr[i]*10) - min* 10);
		int end = (int)(arr[i+1]*10 - min*10);
		for (int j = start; j < end; j++)
		{
			ch[j] = 1;
		}
		
	}


	for (int i = 0; i < sum; i++)
	{
		if (ch[i] == 1)
			length++;
	}

	
	

	printf("%.1f", length*0.1);

}
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int findMin(int arr[], int size);
int findMax(int arr[], int size);
int findSum(int arr[], int size);
int findAvg(int arr[], int size);

int main()
{
	int size;
	int i;
	srand(time(0));
	printf(" Enter an integer: ");
	scanf("%d",&size);
	int arr[size];
	
	for(i = 0;i < size;i++)
	{
	arr[i]=rand()%1001;
	}

	int maxpos = findMax(arr, size);
	int minpos = findMin(arr, size);
	int avg = findAvg(arr, size);
	int sum = findSum(arr, size);
	
	printf(" max:    %3d pos:    %3d\n",arr[maxpos],maxpos);
	printf(" min:    %3d pos:    %3d\n",arr[minpos],minpos);
	printf(" avg:    %3d\n",findAvg(arr,size));
	printf(" sum:  %5d\n",findSum(arr,size));
	printf("\n");
	printf("  Pos :  Val ");
	printf("\n");
	printf(" ----------- ");
	printf("\n");
	
	for( i = 0; i < size;i++)
	{
	printf(" %4d : %4d\n",i,arr[i]);
	}

return 0;
}

	
int findMin(int arr[], int size)
{
	int min;
	int minpos;
	int i;
	min = arr[0];
	minpos = 0;
	
	for( i = 0; i < size;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
			minpos = i;
		}
	}
	
return minpos;
}

int findMax(int arr[], int size)
{
    int max;
	int maxpos;
	int i;
	maxpos = 0;
	max = arr[0];
	
	for( i = 0; i < size;i++)
	{
		if(arr [i]> max)
	{
			max = arr[i];
			maxpos = i;
	}
	}
	
return maxpos;
}

int findSum(int arr[], int size)
{
    int sum;
	int i;
	sum = 0;
	
	for( i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	
return sum;	
}

int findAvg(int arr[], int size)
{
	int sum;
	int avg;
	sum = findSum(arr,size);
	avg = sum / size;

return avg;
}
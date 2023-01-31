#include <stdio.h>

void sort(int arr[])
{
	int i, j;
	int temp;
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void printMinMax(int arr[])
{
	int i;
	int min = 0, max = 0;
	for(i=0; i<5; i++)
	{
		printf("\nSorted Array element no. %d: %d", i+1, arr[i]);
		if(i<4)
		{
			min += arr[i];
		}
		if(i>0)
		{
			max += arr[i];
		}
	}
	
	printf("\nMax: %d \nMin: %d", max, min);
}

void main(){
	int arr[5];
	int i;
	printf("\nEnter array elements: ");
	for(i=0; i<5; i++)
	{
		printf("\nEnter element no. %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	sort(arr);
	printMinMax(arr);
}

/*
 * main.c
 *
 *  Created on: 17 Nis 2023
 *      Author: emre
 */

#include "stdio.h"
#include "stdlib.h"

int binary_search(int *array, int n,int item)
{
	int mid_index=0;
	int first_index=0;
	int last_index=0;
	int guess=0;

	last_index = n-1;

	while(first_index<=last_index)
	{
		mid_index = (first_index+(last_index))/2;
		guess = array[mid_index];

		if(item == guess)	return mid_index;

		if(item>guess)
		{
			first_index = mid_index+1;
		}
		else
		{
			last_index=mid_index-1;
		}

	}

	return -1;

}


int main()
{
	int data=0,result;
	int arr[5] = {2,5,7,9,10};

	printf("enter element to find in array\n");
	scanf("%d",&data);

	result = binary_search(arr, 5, data);

	printf("You want to find:%d and it's in %d. index in array\n",data,result);

	system("pause");

	return 0;
}

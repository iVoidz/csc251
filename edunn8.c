#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

int printer(int *ptr);
int fillArray(int arr[]);
int main(void)
{
	int *ptr;
	int array[SIZE] = {0};
	ptr = array;
	
	fillArray(ptr);
	printer(ptr);
	return EXIT_SUCCESS;
}

int fillArray(int *ptr)
{
	int i;
	srand(time(NULL));
	for(i = 0; i < SIZE; i++)
	{
		*ptr = (rand() %(33)) + 20;
		ptr++;
	}
}

int printer(int *ptr)
{
	int i;
	for(i = 0; i < SIZE; i++)
	{
		printf("array[%d]= %d\n", i, *ptr);
		ptr++;
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 30

void sorter(int arr[SIZE]);
void randomFill(int arr[SIZE]);
void printer(int arr[SIZE]);
int main(void)
{
	int arr[SIZE] = {0};
	printf("Array before\n");
	printer(arr);

	randomFill(arr);
	printf("Array after insert\n");
	printer(arr);

	sorter(arr);
	printf("Array after sort\n");
	printer(arr);
	return EXIT_SUCCESS;
}
void printer(int arr[SIZE])
{
	int i;
	for(i = 0; i < SIZE; i++)
	{
		printf("a[%d] = %d\n",i,arr[i]);
	}
}

void randomFill(int arr[SIZE])
{
	int i;
	srand(time(NULL));

	for(i = 0; i < SIZE; i++)
	{
		arr[i] = (rand()%(205-55+1))+55;
	}
}

void sorter(int arr[SIZE])
{
	int i,j;
	for(i = 0; i < SIZE; i++)
	{
		for(j = i; j < SIZE; j++)
		{
			if(arr[j] < arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

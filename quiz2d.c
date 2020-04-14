/*Elijah Dunn
 * csc 251
 * quiz 2d
 * 4/13/20
 * */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 5

char printLets(char *ptr);
int fLower(char *ptr);
int fUpper(char *ptr);
int intPrinter(int *ptr);
int fillInt(int *ptr);
int main(void)
{
	int *ptr1;
	int arr1[SIZE] = {0}; 
	ptr1 = arr1;

	char *ptr2;
	char arr2[SIZE] = {'a'};
	ptr2 = arr2;

	fillInt(ptr1);
	intPrinter(ptr1);

	fLower(ptr2);
	printLets(ptr2);
	return EXIT_SUCCESS;
}

int fillInt(int *ptr)
{
	int i;
	srand(time(NULL));
	for(i = 0; i < SIZE; i++)
	{
		*ptr = (rand() %(11)) + 10;
		ptr++;
	}
}
int fUpper(char *ptr)
{
	int i,x;
	char c = 'X';
	srand(time(NULL));
	for(i = 0; i < SIZE; i++)
	{
		x = (rand() %(26)) + 65;
		c = x + '0';
		*ptr = c;
		ptr++;
	}
}
int fLower(char *ptr)
{
	int i,x;
	char c = 'x';
	srand(time(NULL));
	for(i = 0; i < SIZE; i++)
	{
		x = (rand() %(26)) + 97;
		c = x + '0';
		*ptr = c;
		ptr++;
	}
}
		
char printLets(char *ptr)
{
	int i;
	for(i = 0; i < SIZE; i++)
	{
		printf("arrayTwo[%d] = %s\n", i, ptr);
		ptr++;
	}
}
int intPrinter(int *ptr)
{
	int i;
	for(i = 0; i < SIZE; i++)
	{
		printf("arrayOne[%d] = %d\n", i, *ptr);
		ptr++;
	}
}

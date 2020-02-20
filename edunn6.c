/*ELijah Dunn
 * 2/20/2020
 * csc-251
 * lab 6
 * */
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int firstArray[] = {0,2,4,6,8};
	int secondArray[] = {1,3,5,7,9};
	int i;
	
	printf("\nBefore Swap");

	//PRINT BEFORE
	for(i = 0; i < 5; i++)
	{
		printf("\nfirstArray[i] = %d, secondArray[i] = %d",firstArray[i],secondArray[i]);
	}

	//SWAP
	for(i = 0; i < 5; i++)
	{
		int swapped = firstArray[i];
		firstArray[i] = secondArray[i];
		secondArray[i] = swapped;
	}

	//space inbetween
	printf("\nAfter Swap");

	//PRINT AFTER
	for(i = 0; i < 5; i++)
	{
		printf("\nfirstArray[i] = %d, secondArray[i] = %d", firstArray[i],secondArray[i]);
	}
	
	printf("\n");
	
	return EXIT_SUCCESS;
}

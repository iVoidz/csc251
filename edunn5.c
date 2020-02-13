/*Elijah Dunn
 * csc 251
 * 2/12/2020
 * Lab 5
 * */
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int print(int x[]);
int rollDie(void);
int prompt(void);

int main(void)
{	
	int i;
	srand(time(NULL));
	int nums[10];

	for(i = 0; i < 10; i++)
	{
		nums[i] = 0;
	}
	
	int n = prompt();
	for(i = 0; i < n; i++)
	{
		nums[rollDie() - 1] = nums[rollDie() - 1] + 1;
	}


	print(nums);

	return EXIT_SUCCESS;
}


int prompt(void)
{
	int choice = 0;
	printf("How many times would you like to roll the 10 sided die?");
	scanf("%d",&choice);
	return choice;
}


int rollDie(void)
{ 
	int n = rand()%10+1;
	return n;
}	


int print(int x[])
{
	printf("%d ones",x[0]);
	printf("\n%d twos",x[1]);
	printf("\n%d threes",x[2]);
	printf("\n%d four",x[3]);
	printf("\n%d fives",x[4]);
	printf("\n%d sixes",x[5]);
	printf("\n%d sevens",x[6]);
	printf("\n%d eights",x[7]);
	printf("\n%d nines",x[8]);
	printf("\n%d tens\n",x[9]);
}



/*Elijah Dunn
 * csc 251
 * 2/12/2020
 * Lab 5
 * */
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int rollDie(void);
int prompt(void);
int print(int one, int two, int three, int four, int five, int six, int seven, int eight, int nine, int ten);

int main(void)
{	
	int i, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, ten = 0;
	srand(time(NULL));
	int nums[10];

	for(i = 0; i < 10; i++)
	{
		nums[i] = 0;
	}
	int n = prompt();
	for(i = 0; i < n; i++)
	{
		switch(rollDie())
		{
			case 1:
				one++;
				break;
			case 2: 
				two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
			case 5:
				five++;
				break;
			case 6:
				six++;
				break;
			case 7:
				seven++;
				break;
			case 8:
				eight++;
				break;
			case 9:
				nine++;
				break;
			case 10:
				ten++;
				break;
		}
}
	print(one, two, three, four, five, six, seven, eight, nine, ten);
	return EXIT_SUCCESS;
}

int prompt(void)
{
	int choice = 0;
	printf("How many times would you like to roll the 10 sided die? ");
	scanf("%d",&choice);
	return choice;
}


int rollDie(void)
{ 
	int n = rand()%10+1;
	return n;
}	


int print(int one, int two, int three, int four, int five, int six, int seven, int eight, int nine, int ten)
{
	printf("You had:\n");
	printf("\n%d ones\n",one);
	printf("\n%d twos\n",two);
	printf("\n%d threes\n",three);
	printf("\n%d four\n",four);
	printf("\n%d fives\n",five);
	printf("\n%d sixes\n",six);
	printf("\n%d sevens\n",seven);
	printf("\n%d eights\n",eight);
	printf("\n%d nines\n",nine);
	printf("\n%d tens\n",ten);
}



/*
Elijah Dunn
2/10/2020
csc-251
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x=0,y=0,z=0;
	srand(time(NULL));
	int i;
	for(i=0; i < 10; i++)
	{
		x = (rand()%(80-50+1))+50; 
		printf("x = %d \n",x);
	}

	return EXIT_SUCCESS;


}

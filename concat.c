#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(int argc, char *argv[])
{
	FILE *fp;
	int rNum;

	srand(time(NULL));
	fp = fopen(argv[1],"w");

	char string[25];
	char num[25];
	printf("Enter a string: \n");
	scanf("%s",string);
	rNum = rand() % 101 + 1200;
	sprintf(num, "%d", rNum);
	strcat(string,num);
	fprintf(fp, "%s\n", string);
	fclose(fp);
	return EXIT_SUCCESS;
}

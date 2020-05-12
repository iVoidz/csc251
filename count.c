#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char c;
	int count1 = 0;
	int count2 = 0;

	fp1 = fopen(argv[1], "r");
	fp2 = fopen(argv[2],"r");
	while((c = fgetc(fp1)) != EOF)
	{
		count1++;
	}
	while((c = fgetc(fp2)) != EOF)
	{
		count2++;
	}
	if(count1 > count2)
	{
		printf("%s contains more characters than %s. \n",argv[1],argv[2]);
	}
	else
	{
		printf("%s contains more characters than %s. \n",argv[2],argv[1]);
	}
	printf("%s contains %d characters.\n",argv[1],count1);
	printf("%s contains %d characters.\n",argv[2],count2);
	return EXIT_SUCCESS;
}


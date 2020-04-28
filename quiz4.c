#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(int argc, char *argv[])
{
	FILE *input, *output;
	char *string; 

	if ((input = fopen(argv[1],"r"))==NULL)
	{
		puts("no file exists");
	}
	else
	{
		output = fopen(argv[2],"a");
		fgets(string,255,input);
		int i,len;
		len = strlen(string);
		for(i = 0; i <= len; i+2)
		{
			fprintf(output,"%s",&string[i]);
		}
	}
	return EXIT_SUCCESS;
}

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 255

int main(int argc, char *argv[])
{
	FILE *input, *output;

	if ((input = fopen(argv[1],"r"))==NULL)
	{
		puts("no file exists");
	}
	else
	{
		output = fopen(argv[2],"w");
		while(!feof(input))
		{	
			int c;
			c = fgetc(input);
			if(islower(c))
			{
				c = toupper(c);
				fputc(c, output);
			}
			if(isupper(c))
			{
				c = tolower(c);
				fputc(c,output);
			}
		}
	  }
	return EXIT_SUCCESS;
}

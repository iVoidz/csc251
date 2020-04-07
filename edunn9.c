/*Elijah Dunn
 * 4/7/2020
 * csc-251
 * lab 9
 * */
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

char findNum(char *ptr);
char findVowels(char *ptr);
char uppercase(char *ptr);
char lowercase(char *ptr);
int main(void)
{
	char *ptr;
	char string[20];
	printf("Enter a string: ");
	fgets(string, sizeof(string), stdin);
	ptr = string;
	lowercase(ptr);
	uppercase(ptr);
	findVowels(ptr);
	findNum(ptr);
	return EXIT_SUCCESS;
}

char lowercase(char *ptr)
{
	size_t i = 0;
	size_t length = strlen(ptr);
	puts("Lowercase Letters\n");
	for(; i < length;i++)
	{
		if(islower(ptr[i]) || ptr[i] == ' ')
		{	
			printf("%c",ptr[i]);
		}
	}
	puts("\n");
}

char uppercase(char *ptr)
{
	size_t i = 0;
	size_t length = strlen(ptr);
	puts("Uppercase Letters\n");
	for(;i < length; i++)
	{
		if(isupper(ptr[i]) || ptr[i] == ' ')
		{
			printf("%c", ptr[i]);
		}
	}
	puts("\n");
}

char findVowels(char *ptr)
{
	size_t i = 0;
	size_t length = strlen(ptr);
	int count = 0;
	puts("Number of vowels\n");
	for(; i <length; i++)
	{
		if( ptr[i] == 'a' || ptr[i] == 'A' || ptr[i] == 'e' || ptr[i] == 'E' || ptr[i] == 'i' || ptr[i] == 'I' || ptr[i] == 'o' || ptr[i] == 'O' || ptr[i] == 'u' || ptr[i] == 'U' || ptr[i] == 'y' || ptr[i] == 'Y')
		{
			count++;
		}
	}
	printf("%d",count);
	puts("\n");
}

char findNum(char *ptr)
{
	size_t i = 0;
	size_t length = strlen(ptr);
	int x,total;
	for(; i < length; i++)
	{
		if(isdigit(ptr[i]))
		{
			x = atoi(&ptr[i]);
			total = x * 12;
			printf("%d * 12 = %d",x,total);
		}
	}
	puts("\n");
}

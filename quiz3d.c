#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#define SIZE 20

void output(int *ptr,char temp[SIZE]);
void fillArr(int *ptr);
int main(void)
{
	char string[SIZE] = " ";
	int arr[SIZE] = {0};
	char *sptr;
	int *aptr;
	FILE *fp;

	sptr = string;
	aptr = arr;
	fillArr(aptr);
	fp = fopen("testtext.txt","r");
	fgets(string, SIZE,fp);

	output(aptr,string);
}

void fillArr(int *ptr)
{
	int i;
	srand(time(NULL));
	for(i = 0; i < SIZE; i++)
	{
		int num = (rand() % (13)) + 5;
		ptr[i] = num;
	}
}

void output(int *ptr, char temp[SIZE])
{
	FILE *fptr;
	int i;

	fptr = fopen("output.txt","w");
	for(i = 0; i < SIZE; i++)
	{
		fprintf(fptr, "%d\n", ptr[i]);
	}
	FILE *fptr2;
	fptr2 = fopen("output.txt","a");
	fprintf(fptr2,"%s \n", temp);

	fclose(fptr);
	fclose(fptr2);
}	


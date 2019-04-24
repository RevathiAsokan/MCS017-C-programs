/*program to create file, open, type some characters and count no. of characters*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
void main()
{
	int count=0;
	FILE *in_file;
	char infile[20];
	char data[100];

	printf("\nEnter file name to create: ");
	gets(infile);

	in_file=fopen(infile,"w");

	if(in_file == NULL)
	{

		printf("File creation error");
		getch();
		exit(0);
	}

	printf("\nEnter characters: ");
	gets(data);
	fputs(data,in_file);
	fclose(in_file);
	in_file = fopen(infile,"r");

	while(getc(in_file) != EOF)
		count++;

	printf("\nNo. of characters in the file is %d",count);
	fclose(in_file);

	getch();
}
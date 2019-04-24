/*Program 23: Reverse a string using pointer notation*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void reverse(char *str)
{
	if(*str)
	{
		reverse(str+1);
		printf("%c", *str);
	}
}

void main()
{
	char s[100],infile[20],ch;
	int i=0;
	FILE *in_file;
	
	printf("\nEnter your file name: ");
	gets(infile);
	
	in_file = fopen(infile, "r");
	
	if(in_file == NULL)
	{
		printf("\nError in opening the file");
		getch();
		exit(0);
	}

	printf("\nThe strings of the file reversed: \n");
    while(!feof(in_file))
         s[i++] = fgetc(in_file);
    s[i]='\0';
	reverse(s);
	fclose(in_file);
	getch();
}

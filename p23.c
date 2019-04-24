/*Program 23: Reverse a string using pointer notation*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void reverse(char *str);
void main()
{
	char s[100];
	
	printf("Enter a string: \n");
	gets(s);
	printf("The reversed string is: \n");
	reverse(s);
	
	getch();
}

void reverse(char *str)
{
	if(*str)
	{
		reverse(str+1);
		printf("%c", *str);
	}
}


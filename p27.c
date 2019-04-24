/*Length of a character using pointers*/
#include<stdio.h>
#include<conio.h>

int find(char s[10])
{
	char *sptr;

	sptr=s;

	while(*sptr!='\0')
	sptr++;

	return(sptr-s);
}

void main()
{
	char str[10];
	int len;

	printf("Enter a string: ");
	gets(str);

	len=find(str);

	printf("Length of the string is %d",len);
	getch();
}
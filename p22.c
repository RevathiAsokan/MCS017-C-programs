/*Program 22: To count number of vowels, consonants and spaces in a given string*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[100];
	int vowels = 0, spaces=0,consonants=0,i;
	
	printf("Enter a string: \n");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
		if(isspace(str[i])) spaces++;
		else if(isalpha(str[i]))
				switch(toupper(str[i]))
				{
					case 'A'	:
					case 'E'	:
					case 'I'	:
					case 'O'	:
					case 'U'	: vowels++;
									break;
					default		: consonants++;
				}
			
	printf("No. of Vowels = %d, Spaces = %d, Consonants = %d", vowels, spaces, consonants);
	
	getch();
}
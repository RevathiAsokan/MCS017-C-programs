/*Program 20(iv): Using recursion reverse 'n' characters*/
#include<stdio.h>
#include<conio.h>
void reverse();
void main()
{
	 printf("Enter the characters: \n");
	 reverse();
	 printf(" is the reverse of the characters entered.");
	 getch();
}

void reverse()
{
	char c;
	
	scanf("%c",&c);
	
	if(c!='\n')
	{
		reverse();
		printf("%c \t",c);
	}
}

	 
	 
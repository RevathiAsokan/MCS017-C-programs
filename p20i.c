/*Program 20(i): Using recursion find the factorial of a number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	 int num;
	 int fact(int);
	 
	 printf("Enter a number: \n");
	 scanf("%d", &num);
	 
	 if(num < 0)
		 printf("Invalid input..!");
	 else
		 printf("Factorial of %d is %d\n",num,fact(num));
	 
	 getch();
}

int fact(int n)
{
	if(n==0)
		return 1;
	else
		return(n*fact(n-1));
}
	 
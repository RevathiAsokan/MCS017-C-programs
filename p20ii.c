/*Program 20(ii): Using recursion find the GCD of two numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	 int num1, num2;
	 int gcd(int, int);
	 
	 printf("Enter two numbers: \n");
	 scanf("%d %d", &num1, &num2);
	 
	 printf("GCD of %d and %d is %d",num1,num2,gcd(num1,num2));
	 
	 getch();
}

int gcd(int n1, int n2)
{
	if(n2 != 0)
		return gcd(n2, n1%n2);
	else	
		return n1;
}
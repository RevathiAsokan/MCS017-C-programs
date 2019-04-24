/*Program 12: Macros to find MAX and MIN*/
#include<stdio.h>
#include<conio.h>
#define min(a,b)(a<b? a:b)
#define max(a,b)(a>b? a:b)

void main()
{
	int num1, num2;

	printf("Enter two numbers : ");
	scanf("%d %d",&num1, &num2);
	printf("The maximum of %d and %d is %d\n",num1, num2, max(num1,num2));
	printf("The minimum of %d and %d is %d\n",num1, num2, min(num1,num2));

	getch();
}
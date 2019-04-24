/* Program 4: To generate the divisors of a given integer*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int num, i;

	printf("Enter a number: ");
	scanf("%d",&num);

	printf("\nThe divisors of %d are: ",num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i == 0)
		printf("%d ",i);
	}

	getch();
}
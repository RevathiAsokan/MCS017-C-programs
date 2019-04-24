/*Program 2: Calculate income tax for the given income*/
#include<stdio.h>
#include<conio.h>

void main()
{
	float tax, income;
	char choice='y';

	while(choice == 'y')
	{

		printf("Enter income: ");
		scanf("%f", &income);

		if(income <= 5000)
			tax = 0;

		else if(income <= 15000)
			tax = (income - 5000)*0.10;

		else if(income <= 35000)
			tax = 1000 + (income - 15000)*0.15;

		else
			tax = 4000 + (income - 35000)*0.20;

		printf("Tax = %.2f", tax);
		printf("\nWould you like to continue (y/n): ");
		scanf("%s", &choice);
	}

	getch();
}
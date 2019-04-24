/*Program 3: Input numbers till 0 is entered
dislay total number of even & odd numbers, average value of even and odd integers*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int num, n_even=0, n_odd=0, s_even=0, s_odd=0, choice;
	float a_even=0.0, a_odd=0.0;

	printf("Enter the numbers: ");
	while(1)
	{
		scanf("%d", &num);

		if (num == 0)
			break;
		else if(num % 2 == 0)
			{
				n_even +=  1;
				s_even = s_even + num;
			}
		else
			{
				n_odd += 1;
				s_odd = s_odd + num;
			}
	}
	
	printf("\n To print: ");
	printf("\n 1. Total number of even and odd numbers" );
	printf("\n 2. Average value of even integers");
	printf("\n 3. Average value of odd integers \n ");
	printf("\n Enter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: printf("\nTotal number of even = %d and odd = %d", n_even, n_odd);
				break;
		case 2: a_even = (float)s_even/n_even;
				printf("\nAverage value of even integers = %.2f", a_even);
				break;
		case 3: a_odd = (float)s_odd/n_odd;
				printf("\nAverage value of odd integers = %.2f", a_odd);
				break;
		default: printf("Invalid entry");
	}

	getch();
}
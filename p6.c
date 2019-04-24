/*Program 6: To check whether a given number is a perfect number or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num, i, sum=0;

	printf("Enter a +ve number: ");
	scanf("%d",&num);

	if(num > 0)
	{
		for(i=1;i<=num/2;i++)
		{
			if(num%i == 0)
			sum = sum + i;
		}
	}

	if(num == sum)
	printf("%d is a perfect number",num);
	else
	printf("%d is not a perfect number",num);

	getch();
}

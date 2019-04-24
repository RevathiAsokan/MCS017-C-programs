/*To find all armstrong number in the */
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int num, i, digit, sum=0, p_digit;

	printf("Armstrong numbers in the range 0 to 999: ");

	for(i=0; i<=999; i++)
	{

		num=i;
		sum=0;
		while(num != 0)
		{
			digit = num%10;
			p_digit = pow(digit, 3);
			sum = sum + p_digit;
			num = num/10;
		}

		if (sum == i)
		printf("%d ",i);
	}
	getch();
}

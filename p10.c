/*Program 10: Compounded Interest*/
#include<stdio.h>
#include<conio.h>
#include <math.h>
float comp_int_calc(long int p, float r, int t);
void main()
{
	long int principal;
	int years;
	float rate, int_amt;

	printf("Enter principal, rate of interest and term: ");
	scanf("%ld %f %d",&principal, &rate, &years);

	int_amt = comp_int_calc(principal, rate, years);

	printf("The compounded interest amount is %.2f\n", int_amt);
	getch();
}

float comp_int_calc(long int p, float r, int t)
{
	float a;

	a=p*pow(1+(r/100.0),t);

	return a;
}
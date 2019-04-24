/*Program 1: To calculate simple interest and compound interest */

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p, t, r, si, ci;

	printf("Enter principal, time and rate of interest: ");
	scanf("%f %f %f", &p, &t, &r);

	si = (p*t*r)/100;
	ci = p * (pow((1+(r/100)),t)-1);

	printf("\nSimple interest = %.2f", si);
	printf("\nCompound interest = %.2f", ci);

	getch();
	
}
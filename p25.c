/*program to multiply two complex numbers*/
#include<stdio.h>
#include<conio.h>
typedef struct
{
	double rp;
	double ip;
}complex;


void main()
{
	complex n1,n2,mul;

	printf("Enter the first complex number: ");
	scanf("%lf %lf",&n1.rp, &n1.ip);

	printf("Enter the second complex number: ");
	scanf("%lf %lf",&n2.rp, &n2.ip);

	mul.rp = (n1.rp * n2.rp) - (n1.ip *  n2.ip);
	mul.ip = (n1.rp * n2.ip) + (n1.ip  * n2.rp);

	printf("\nThe multiple of the two complex numbers is: \n");
	printf("%.2lf + %.2lfi",mul.rp, mul.ip);

	getch();
}

/*Program 7 to find the roots of a quadratic equation*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int a, b, c;
	float d, sqrt_val, r1, r2, real_part, imag_part;

	printf("Enter the value of a, b and c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==0)
	{
		printf("Invalid input");
		getch();
		exit(0);
	}

	d=b*b-4*a*c;
	sqrt_val = sqrt(abs(d));

	if(d > 0)
	{
		r1 = (-b + sqrt_val)/(2*a);
		r2 = (-b - sqrt_val)/(2*a);
		printf("Roots are real and different");
		printf("\nThe roots are %.1f and %.1f",r1, r2);
	}
	else if(d==0)
	{
		r1 = (float)-b/(2*a);
		printf("Roots are real and same");
		printf("\nThe root is %.1f",r1);
	}
	else
	{
		real_part = (float)-b/(2*a);
		imag_part = sqrt_val/(2*a);
		printf("Roots are complex");
		printf("\nThe roots are %.1f + %.1fi and %.1f - %.1fi",real_part,imag_part,real_part,imag_part);
	}
	getch();
}

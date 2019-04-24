/*Program 14: To input 20 integers in an array and reverse*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100], b[100], i,j=0;

	printf("Enter 20 integers: ");
	for(i=0;i<20;i++)
	scanf("%d",&a[i]);

	for(i=19;i>=0;i--)
	{
		b[j] = a[i];
		j++;
	}

	printf("The reversed array is ");
	for(i=0;i<20;i++)
	printf("%d ",b[i]);

	getch();
}
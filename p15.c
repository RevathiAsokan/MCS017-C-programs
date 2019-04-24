/*Program 15: Add/Subtract/Multiply two matrices */
#include<stdio.h>
#include<conio.h>
int a[10][10], b[10][10], r[10][10], n, i, j,k;
void main()
{
	int choice;
	input();
	printf("\n Select:");
	printf("\n 1. To add two matrices "); 
	printf("\n 2. To subtract two matrices");
	printf("\n 3. To multiply two matrices");
	printf("\n Enter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: add();
				break;
		case 2: sub();
				break;
		case 3: mul();
				break;
		default: printf("\nInvalid input");
	}
	display();
	getch();
}

void input()
{	
	printf("Enter the order of the matrix: ");
	scanf("%d",&n);
	
	printf("Enter first %d x %d matrix elements: \n",n,n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	printf("Enter second %d x %d matrix elements: \n",n,n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
}

void add()
{
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			r[i][j] = a[i][j] + b[i][j];
	printf("\n The sum of two matrices is: \n");
}

void sub()
{
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			r[i][j] = a[i][j] - b[i][j];
	printf("\n The difference of two matrices is: \n");
}

void mul()
{
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			r[i][j]=0;
			for(k=0;k<n;k++)
				r[i][j] = r[i][j] + a[i][k] * b[k][j];
		}
	printf("\n The product of two matrices is: \n");
}

void display()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
				printf("%d\t",r[i][j]);
		}
		printf("\n");
	}
}
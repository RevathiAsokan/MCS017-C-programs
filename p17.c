/*Program 17: To print upper and lower triangle of a matrix*/
#include<stdio.h>
#include<conio.h>
int a[10][10], n, i, j;

void upper_matrix()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
				printf(" \t");
			else
				printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
}

void lower_matrix()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
				printf(" \t");
			else
				printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	
	printf("Enter the order of the matrix: ");
	scanf("%d",&n);
	printf("Enter the %d x %d matrix elements: ", n, n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]); 
	
	printf("\n The upper triangle of the matrix is: \n");
	upper_matrix();
	printf("\n The lower triangle of the matrix is: \n");
	lower_matrix();
	
	getch();
}
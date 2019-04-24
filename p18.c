/*Program 18: To compute transpose of a matrix*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],r, c, i, j;

	printf("Enter number of rows and columns: ");
	scanf("%d %d",&r, &c);
	printf("Enter the %d x %d matrix elements: \n", r, c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]); 
			b[j][i] = a[i][j];
		}
	
	printf("The transpose of the matrix is: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
		
	getch();
}
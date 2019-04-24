/*Program 16: To check if a matrix is magic square or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10], n, i, j, choice, d_sum, r_sum, c_sum, flag=1;

	printf("Enter the order of the matrix: ");
	scanf("%d",&n);
	
	printf("Enter %d x %d matrix elements: \n",n,n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	
	d_sum=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i==j)
				d_sum = d_sum + a[i][j];
	
	for(i=0;i<n;i++)
	{
		r_sum=0;
		
		for(j=0;j<n;j++)
			r_sum = r_sum + a[i][j];
		
		if (d_sum != r_sum)
		{	
			flag = 0;
			break;
		}
	}

	for(i=0;i<n;i++)
	{
		c_sum=0;
		
		for(j=0;j<n;j++)
			c_sum = c_sum + a[i][j];
		
		if (d_sum != c_sum)
		{
			flag =0;
			break;
		}
	}
	
	if(flag==1)
		printf("\nThe Matrix entered is Magic square");
	else
		printf("\nThe Matrix entered is not a Magic square");
	
	getch();
}
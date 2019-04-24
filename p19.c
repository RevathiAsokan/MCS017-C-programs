#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	float matrix[10][10] ;  
	float temp, r ;
	int i, j, k, n, t;

	printf("\nInverse of matrix using Guass Jordan Elimination method ");
	printf("\nEnter the order of the matrix : \n");
	scanf("%d",&n);
	printf("\nEnter %d x %d matrix : \n",n,n);
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
            scanf("%f",&matrix[i][j]) ;
		
	for(i=0;i<n; i++)
		for(j=n; j<2*n; j++)
		{
			if(i==j%n)
				matrix[i][j]=1;
			else
				matrix[i][j]=0;
		}

	for(j=0; j<n; j++)
	{
		t=j;

		for(i=j+1; i<n; i++)
			if(matrix[i][j]>matrix[t][j])
                t=i;

		if(fabs(matrix[t][j])<0.0005)
		{
			printf("\nInverse of this matrix does not exist...!");
			goto end;
		}

		if(t!=j)
		for(k=0; k<2*n; k++)
		{
			temp=matrix[j][k] ;
			matrix[j][k]=matrix[t][k] ;
			matrix[t][k]=temp ;
		}

		for(i=0; i<n; i++)
		{      
			if(i!=j)
			{
				r=matrix[i][j];
				for(k=0; k<2*n; k++)
					matrix[i][k]-=(matrix[j][k]/matrix[j][j])*r ;
			}
			else
			{
				r=matrix[i][j];
				for(k=0; k<2*n; k++)
					matrix[i][k]/=r ;
			}
		}
	}
	printf("\n\n\n The inverse of the matrix is : \n\n");
	for(i=0; i<n; i++)
	{
		for(j=n; j<2*n; j++)
            printf("  %.2f",matrix[i][j]);
		printf("\n");
	}
	end: getch() ;
 }
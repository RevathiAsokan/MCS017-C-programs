/*Program 20(iii): Using recursion generate fibonacci series*/
#include<stdio.h>
#include<conio.h>
void main()
{
	 int n,i;
	 int fibo(int);
	 
	 printf("Enter the value of n: \n");
	 scanf("%d", &n);
	 
	 printf("Fibonacci series: \n");
	 for(i=1;i<=n;i++)
	 printf("%d\t",fibo(i));
	 
	 getch();
}

int fibo(int k)
{
	if(k==1) 
		return 0;
	else if(k==2)
		return 1;
	else
		return(fibo(k-1)+fibo(k-2));
}
	
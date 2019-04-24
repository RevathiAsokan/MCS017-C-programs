/*Program 13: Find the largest and smallest*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num[100],i, n, max, min;

	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);

	max=num[0];
	min=num[0];

	for(i=1;i<n;i++)
	{
		if(max < num[i])
			max = num[i];
		if(min > num[i])
			min = num[i];
	}

	printf("Largest number = %d\n",max);
	printf("Smallest number = %d",min);

	getch();
}
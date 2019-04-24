/*program to return minimum and maximum in an array using pointers*/
#include<stdio.h>
#include<conio.h>
void minmax(int a[], int len, int *min, int *max)
{
	int i;

	for(i=1;i<len;i++)
	{
		if(*min > a[i])
			*min = a[i];

		if(*max < a[i])
			*max = a[i];
	}
}

void main()
{
	int num[100], n, min_num, max_num,i;

	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);

	min_num = max_num = num[0];
	minmax(num, n, &min_num, &max_num);

	printf("\nMaximum = %d",max_num);
	printf("\nMinimum = %d",min_num);

	getch();
}


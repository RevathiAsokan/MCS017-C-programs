/*Program 9 */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int number, position, length, result;
	int invert(int, int, int);
	
	printf("Enter the number, position and length ");
	scanf("%d %d %d", &number, &position, &length);
	
	result=invert(number, position, length);
	
	printf("\nThe number after inverting bits = %d",result);
	getch();
}

int invert(int num, int pos, int len)
{
	int bin_num[8], i, j, res=0;
		
	for(i=0;i<8;i++)
		bin_num[i]=0;
	
	i=0;	
	while(num > 0)
	{
		bin_num[i]=num%2;
		num=num/2;			
		i++;
	}
		
	for(i=0;i<8;i++)
	{ 
		if(i==pos)
		{
			for(j=pos;j>pos-len;j--)
			{
				if(bin_num[j]==0)
					bin_num[j]=1;
				else
					bin_num[j]=0;
			}
		}
	}	
	
	for(i=0;i<8;i++)
	{
		res = res + (bin_num[i]*pow(2,i));
	}
	
	return res;
}
/*Program 21: Convert a given lowercase string to uppercase string without using inbuilt string function*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i=0;
	
	printf("Enter a string: \n");
	gets(str);	
	
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		
		i++;
	}
	
	printf("The entered string in uppercase is: \n%s",str);
	getch();
}
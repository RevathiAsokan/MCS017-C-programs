/*Program 24: to process the students evaluation records using structures*/
#include<stdio.h>
#include<conio.h>
struct std
{
	char enroll_no[10], name[20];
	int sub1, sub2, sub3;
};
typedef struct std STUDENT;

void main()
{
	STUDENT d[100];
	char ch;
	int k, i=0;

	while(1)
	{
		printf("\nEnter enrollment number: ");
		scanf("%s",&d[i].enroll_no);
		fflush(stdin);

		printf("\nEnter student name: ");
		gets(d[i].name);
		fflush(stdin);

		printf("\nEnter marks of subject 1: ");
		scanf("%d",&d[i].sub1);
		fflush(stdin);

		printf("\nEnter marks of subject 2: ");
		scanf("%d",&d[i].sub2);
		fflush(stdin);

		printf("\nEnter marks of subject 3: ");
		scanf("%d",&d[i].sub3);
		fflush(stdin);

		printf("\nWould you like to add a record (y/n): ");
		ch=getchar();
		i++;

		if(ch=='n')break;
	}

	printf("\n-----Student Evaluation Record------\n");
	printf("Enroll_no\tName\t\tsub1\t\tsub2\t\tsub3\n");
	for(k=0;k<i;k++)
	{
		printf("%s\t\t%s\t\t%d\t\t%d\t\t%d\n",d[k].enroll_no,d[k].name,d[k].sub1, d[k].sub2, d[k].sub3);
	}
	getch();
}


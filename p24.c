/*Program to process the students evaluation records using structures*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct std
{
	char enroll_no[10], name[20];
	int sub1, sub2, sub3, sub4, sub5, sub6, sub7;
};
typedef struct std STUDENT;

STUDENT s[100], *p = s;
int i=0;

void input();
void display();

void main()
{
	int ch=0;
	
	while(1)
	{
		
		printf("\n\n----STUDENT EVALUATION RECORD----");
		printf("\n\n1.Add a new record");
		printf("\n2.View records");
		printf("\n3.Exit");
		printf("\n\n-----------------------------------");		
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:	input();
					break;
			case 2: display();
					break;
			case 3: exit(0);
			default: printf("\nInvalid choice!");
		}
	}
	getch();
}

void input()
{
		printf("\nEnter enrollment number and student name: ");
		scanf("%s",&s[i].enroll_no);
		gets(s[i].name);
		fflush(stdin);

		printf("\nEnter marks of seven subjects: ");
		scanf("%d %d %d %d %d %d %d",&s[i].sub1, &s[i].sub2, &s[i].sub3, &s[i].sub4, &s[i].sub5,&s[i].sub6, &s[i].sub7);
		fflush(stdin);
		
		i++;
}

void display()
{
	char status;
	int  k;
	
	if(i)
	{
		printf("\n\n\t\tINDIRA GANDHI NATIONAL OPEN UNIVERSITY\n");
		printf("\n\t\t  TERM END EXAMINATION (JAN - 2019)\n");
		printf("\n\nProgramme code: MCA I");
		printf("\n-------------------------------------------------------------------------------");
		printf("\nRoll_No\tName\t\tMCS11\tMCS12\tMCS13\t MCS14\t MCS15\tMCSL16\tMCSL17\n");
		printf("\n-------------------------------------------------------------------------------");
		
		for(k=0;k<i;k++)
		{
			{
				printf("\n%s\t%s\t\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",s[k].enroll_no, s[k].name,s[k].sub1, s[k].sub2, s[k].sub3,s[k].sub4, s[k].sub5, s[k].sub6, s[k].sub7);
				printf("\t\t");
				if(p->sub1 > 35) status='P'; else status='F';
				printf("\t%c",status);
				if(p->sub2 > 35) status='P'; else status='F';
					printf("\t%c",status);
				if(p->sub3 > 35) status='P'; else status='F';				
					printf("\t%c",status);
				if(p->sub4 > 35) status='P'; else status='F';
					printf("\t%c",status);
				if(p->sub5 > 35) status='P'; else status='F';
					printf("\t%c",status);
				if(p->sub6 > 35) status='P'; else status='F';
					printf("\t%c",status);
				if(p->sub7 > 35) status='P'; else status='F';
					printf("\t%c\n\n",status);
				p++;
			}
		}
		printf("\n-------------------------------------------------------------------------------\n\n");
	}
	else
		printf("\nNo records to display\n");
}

/*Program No. 32*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct std
{
	char fname[20];
	char lname[20];
	int ssnno;
	int age;
};

void main()
{
	struct std s;

	FILE *in_file;
	char infile[20];

	printf("\nEnter file name: ");
	scanf("%s",infile);

	in_file = fopen(infile,"w");

	if(in_file == NULL)
	{
		printf("File creation error");
		getch();
		exit(0);
	}

	while(1)
	{
		printf("\nEnter First name: ");
		scanf("%s",&s.fname);
		if(strcmp(s.fname,"exit")==0)
		{
			fclose(in_file);
			exit(0);
		}
		fprintf(in_file,"%s ",s.fname);
		printf("\nEnter last name: ");
		scanf("%s",s.lname);
		fprintf(in_file,"%s ",s.lname);
		printf("\nEnter SSN No: ");
		scanf("%d",&s.ssnno);
		fprintf(in_file,"%d ",s.ssnno);
		printf("\nEnter age: ");
		scanf("%d",&s.age);
		fprintf(in_file,"%d ",s.age);
		fprintf(in_file,"\n");
	}
	fclose(in_file);
}








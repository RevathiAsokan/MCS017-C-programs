#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{
    char ch, infile[20], bkfile[20];
    FILE *in_file, *bk_file;
	int size;
     
    printf("Enter your file name: \n");
    gets(infile);
     
    in_file = fopen(infile, "r");
     
    if (in_file == NULL)
	{
		printf("\nFile not found");
		getch();
		exit(0);
	}
    
	for(size = 0; getc(in_file) != EOF; ++size);
	printf("No. of bytes in the file : %d\n",size);
	
	strcpy(bkfile, infile);
	strcat(bkfile, ".bak");
		
    bk_file = fopen(bkfile, "w");
     
    if (bk_file == NULL)
	{
		fclose(in_file);
		printf("\nError in opening the file");
		getch();
		exit(0);
	}
     
    while ((ch = fgetc(in_file)) != EOF)
		fputc(ch, bk_file);
    
    printf("\n%s file created successfully",bkfile);
    fclose(bk_file);
	getch();
}
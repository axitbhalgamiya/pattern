#include<stdio.h>
void main()
{
	FILE *fp1;
    int a;
    char f1[100],ch;
    printf("Enter name of source file: ");
    scanf("%s", f1);
    fp1 = fopen(f1, "r");
    if (fp1 == NULL) 
    {
        printf("Cannot open this file\n");
    }
   	ch=getc(fp1);
   	printf("%c",ch);
}
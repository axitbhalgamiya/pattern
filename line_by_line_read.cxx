#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp1;
    int a;
    char f1[100],line[100];
    printf("Enter name of source file: ");
    scanf("%s", f1);
    fp1 = fopen(f1, "r");
    char *fp;
    if (fp1 == NULL) 
    {
        printf("Cannot open this file\n");
    }
    while(fgets(line,100,fp1) != NULL)
    printf("read line is %s \n",line);
 
}
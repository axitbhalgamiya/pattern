 
#include <stdio.h>
 
void main(int argc, char **argv)
{
    FILE *fp;
    char ch,f1[1000];
    int size = 0,i=0,Count=0;
    printf("Enter name of source file: ");
    scanf("%s", f1);
    fp = fopen(f1, "r");
    if (fp == NULL)
        printf("\nFile unable to open ");
    else 
        printf("\nFile opened ");
    fseek(fp, 0, 2);
    size = ftell(fp);
    printf("The size of given file is : %d\n", size);
    printf("file in reversed order is :\n");
    while( i <size)
    {
        i++;
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));
    }
    printf("\n");
    fclose(fp);
}
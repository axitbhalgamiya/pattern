#include<stdio.h>

void main()
{
char name[100];

printf("\nEnter the name : ");
scanf("%[^\n]",name);

printf ("\nName is %s ",name);
}
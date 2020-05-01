#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	clrscr();
	fp1=fopen("/storage/emulated/0/A.txt","r");
	fp2=fopen("/storage/emulated/0/Hi.txt","w");
	if(fp1== NULL || fp2 == NULL)
	{
		printf("can not open file");
		exit(1);
	} 
	ch=fgetc(fp1);
	
	while(ch != EOF)
	{
		putc(ch,fp2);
		ch=fgetc(fp1);
	}
	printf("file copied");
	fclose(fp1);
	fclose(fp2);
	getch();
}
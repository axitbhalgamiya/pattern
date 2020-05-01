#include<stdio.h>
void main()
{
	int n,va=1;
	char ch='A';
	printf("enter the value");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf("%d",va);
				va=va+2;
			}
			else
			{
				printf("%c",ch);
				ch=ch+2;
			}
		}
      	printf("\n");
	}
}
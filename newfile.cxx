#include<stdio.h>
void main()
{
	int n,d=1;
	char a='A';
	printf("enter the value");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(k=0;k<=i;k++)
		if(i%2!=0)
    	{
			printf("%d",d);
        	d=d+2;
    	}
	else
		{
			printf("%c",a);
			a=a+2;
		}
		printf("\n");
	}
}
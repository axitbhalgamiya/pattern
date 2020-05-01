#include<stdio.h>
void main()
{
	int n,i,j,k,m;
	printf("enter the value : ");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		for(m=0;m<n+1;m++)
		if(i<m)printf(" ");
		for(j=i;j>=0;j--)
		printf("O");
		for(k=i;k>=0;k--)
		printf("K");
		if(i!=0)
		printf("\n");
	}
}
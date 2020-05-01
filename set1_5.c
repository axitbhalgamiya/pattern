#include<stdio.h>
void main()
{
	int a=5,b=10,c=-6;
	printf("%d\n",a>b && a<c);
	printf("%d\n",a<b && a>c);
	printf("%d\n",a==c || b>a);
	printf("%d\n",b>15 && c<0 || a>0);
	
}
#include <stdio.h>
void main()
{
	int a, b, c;
	printf("enter the value of A:");
	scanf("%d", &a);
	printf("enter the value of B:");
	scanf("%d", &b);
	c = a;
	a = b;
	b = c;
	printf(" the value of A is %d", a);
	printf(" the value of B is %d", b);
}
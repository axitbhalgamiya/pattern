//1. to add , subtract, multiply, divide using function//
#include <stdio.h>
int f1(int num1, int num2)
{
	int add;
	add = (num1 + num2);
	return add;
}
int f2(int num1, int num2)
{
	int sub;
	if (num1 > num2)
		sub = (num1 - num2);
	else
		sub = (num2 - num1);
	return sub;
}
int f3(int num1, int num2)
{
	int mul;
	if (num1 != 0 && num2 != 0)
		mul = (num1 * num2);
	else
		printf("it is not possible");
	return mul;
}
int f4(int num1, int num2)
{
	int div;
	if (num2 != 0)
		div = (num1 / num2);
	return div;
}
void main()
{
	int add, sub, mul, div, a, b;
	printf("enter a number 1 :\n");
	scanf("%d", &a);
	printf("enter a number 2 :\n");
	scanf("%d", &b);
	add = f1(a, b);
	sub = f2(a, b);
	mul = f3(a, b);
	div = f4(a, b);
	printf("addition is %d\n", add);
	printf("subtraction is %d\n", sub);
	printf("multiplication is %d\n", mul);
	printf("division is %d", div);
}
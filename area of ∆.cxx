//2. calcuate area of triangle using function//
#include<stdio.h>
#include<math.h>
int f(int a,int b,int c)
{
	float F,A,R;
	F=(a+b+c)/2;
	R=(F*(F-a)*(F-b)*(F-c));
	A=sqrt(R);
	return(A);
}
void main()
{
	int x,y,z;
	float Area;
		printf("enter 1st side:\n");
	scanf("%d", &x);
		printf("enter 2nd side :\n");
	scanf("%d", &y);
		printf("enter 3rd side :\n");
	scanf("%d", &z);
	Area = f(x,y,z);
	printf("area is %f",Area);
}
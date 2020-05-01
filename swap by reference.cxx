//1. implement swapping of 2 variable using call by reference //
#include <stdio.h>
void swap(int*, int*); 
int main()
{
   int A, B;
   printf("Enter the value of A and B\n");
   scanf("%d%d",&A,&B);
   printf("Before Swapping\nA = %d\nB = %d\n", A, B);
   swap(&A, &B); 
   printf("After Swapping\nA = %d\nB = %d\n", A, B);
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
   temp = *b;
   *b = *a;
   *a = temp;   
}
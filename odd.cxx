#include <stdio.h>

void main()
{
  float a[5],sum=0;
  int i;
  printf("enter the number:");
  for(i=0;i<5;i++)
  scanf("%f",&a[i]);
  for(i=0;i<5;i++) 
  {if(i%2==0)
    sum=sum+a[i];
  }
  printf("sum=%f\n",sum);
  
}
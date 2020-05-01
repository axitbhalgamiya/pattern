#include <stdio.h>
int main()
{  
float a[3][3], b[3][3], result[3][3];  
 printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < 3; ++i) 
     for (int j = 0; j < 3; ++j)
         {      printf("Enter a%d%d: ", i + 1, j + 1);                         scanf("%f", &a[i][j]);   
          }
    printf("Enter elements of 2nd matrix\n");
   for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j)   
     {      printf("Enter b%d%d: ", i + 1, j + 1);                        scanf("%f", &b[i][j]); 
        }
     for (int i = 0; i < 3; ++i)    
     for (int j = 0; j < 3; ++j)  
     {      result[i][j] = a[i][j] + b[i][j];    }  
              printf("Sum Of Matrix:\n");
     for (int i = 0; i < 3; ++i)   
      for (int j = 0; j < 3; ++j)    
				      {      printf("%.1f\t", result[i][j]);    
               if (j == 2)       
              printf("\n");    
              } 
               return 0;
}
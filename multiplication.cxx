#include <stdio.h>
void main()
{
	float a[15][15], b[15][15], result[15][15], sum = 0;int k,l,p,q;
	printf("Enter number of rows and columns of 1st matrix\n");
	scanf("%d%d", &k, &l);
	printf("Enter elements of 1st matrix\n");
	for (int i = 0; i < k; ++i)
		for (int j = 0; j < l; ++j)
		{
			printf("Enter a%d%d: ", i + 1, j + 1);
			scanf("%f", &a[i][j]);
		}
	printf("Enter number of rows and columns of 2nd matrix\n");
	scanf("%d%d", &p, &q);
	if (l!= p)
		printf("The multiplication isn't possible.\n");
	else
	{
		printf("Enter elements of 2nd matrix\n");
		for (int i = 0; i < p; ++i)
			for (int j = 0; j < q; ++j)
			{
				printf("Enter b%d%d: ", i + 1, j + 1);
				scanf("%f", &b[i][j]);
			}
		//multiplication//
		printf("multiplication Of Matrix:\n");
		for (int i = 0; i <= 1; ++i)
			for (int j = 0; j <= 1; ++j)
			{
				for (int m = 0; m <= 1; ++m)
				{
					sum = sum + a[i][m] * b[m][j];
				}

				result[i][j] = sum;
				sum = 0;
			}

		for (int i = 0; i <= 1; ++i)
			for (int j = 0; j <= 1; ++j)
			{
				printf("%.1f\t", result[i][j]);
				if (j == 1)
					printf("\n");
			}
	}
}
#include <time.h>
#include <stdio.h>
#include <math.h>

int main()
{
	float a[50], sum = 0, sum1 = 0, sum2 = 1;
	int i, n;
	time_t t;
	time(&t);
	printf("%s\n", ctime(&t));
	printf("\n practical no: 35 \n en. No: 190130107116");
	printf("\n How many numbers you want to enter :");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("\n Enter Value at Position [%d] : ", i + 1);
		scanf("%f", &a[i]);
		sum = sum + a[i];
		sum1 = sum1 + (1.0 / a[i]);
		sum2 = sum2 * a[i];
	}
	printf("\n Average = %f", sum / n);
	printf("\n Geometric Mean = %f", pow(sum2, (1.0 / n)));
	printf("\n Harmonic Mean = %f", n * pow(sum1, -1));
	return 0;
}
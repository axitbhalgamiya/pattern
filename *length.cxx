#include <stdio.h>

int main()
{
	char str[20], *pt;
	int i = 0;
	printf("Enter Any string [below 20 chars] : ");
	gets(str);
	pt = str;
	char *fpt;fpt=pt;
	
	while (*pt != '\0')
	{
		i++;
		pt++;
	}
	char *lpt; lpt=pt;
	
	printf("Length of String by counter : %d", i);
	printf("\nLength of String by address : %d", lpt-fpt);
	return 0;
}
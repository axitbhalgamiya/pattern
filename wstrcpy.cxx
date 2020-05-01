//wstrcpy()//
#include <stdio.h>
#include <string.h>
void main()
{
	char s1[100], s2[100], i;
	printf("Enter string 1: ");
	fgets(s1, sizeof(s1), stdin);

	for (i = 0; s1[i] != '\0'; ++i)
	{
		s2[i] = s1[i];
	}

	printf("copy string 1 in String 2 is : %s\n", s2);
	printf("copied");
}
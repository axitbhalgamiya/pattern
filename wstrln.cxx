//wstrln//
#include <stdio.h>
#include <string.h>
void main()
{
	char s[50];
	printf("Enter string :");
	gets(s);

	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;

	printf("Length of the string: %d", i);
}
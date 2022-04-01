#include <stdio.h>

/**
 *
 */
char us[] = "Hello";

void pstr(char *a)
{
	printf("%s\n", a);
}

void main()
{
	pstr(us);
}

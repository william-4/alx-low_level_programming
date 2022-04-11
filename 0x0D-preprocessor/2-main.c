#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: void
 */
void main(void)
{
	printf("0%s\n", __FILE__);
}

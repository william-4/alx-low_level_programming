#include <stdio.h>

/**
 *print_triangle - prints a triangle
 *@size: the size of the triangle
 *Return: void
 */
void main(int size)
{
	int i, j, k;

	size = 5;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - 1); j++)
				putchar(' ');
			for (k = 1; k <= i; k++)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}

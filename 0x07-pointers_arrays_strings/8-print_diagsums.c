#include "main.h"
#include <stdio.h>

/**
 *function that prints the sum of the two diagonals of a square matrix of
 * integers
 *@a: input int array
 *@size: input int
 *
 *Return: void
 */
void print_diagsums(int *a, int size)/* a is a pointer to int*/
{
	int sum = 0;
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i = j || (i + j == 4))
				sum += a[i][j];
		}
	}
	printf("%d\n", sum);
}
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums(c3, 3);
    print_diagsums(c5, 5);
    return (0);
}

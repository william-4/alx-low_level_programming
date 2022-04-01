#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive integers
 *@argc: count of string arguments in argv
 *@argv: input string arguments
 *
 *Return: 0(Succes) or 1(Error)
 */
int main(int argc, char *argv[])
{
	int num, num2, sum;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (num = 1; num < argc; num++)
	{
		for (num2 = 0; argv[num][num2] != '\0'; num2++)
		{
			if (argv[num][num2] < '0' || argv[num][num2]
			    > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: count of strings in argv
 *@argv: input array of strings
 *
 *Return: 0(Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int ans;

	ans = 1;
	if (argv[1] && argv[2])
	{
		/* atoi converts string to integer */
		ans = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", ans);
		return (0);
	}
	printf("Error\n");
	return (1);
}

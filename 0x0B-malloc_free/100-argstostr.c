#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates all arguments
  * @ac: count
  * @av: pointer to array of size ac
  * Return: NULL if ac == 0 or av == null, Pointer to new string.
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	str = malloc((sizeof(char) * size) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

/**
 * int_index - function that searches for an integer
 * @array: input integer array
 * @size: size of the array
 * @cmp: function to compare values, returns an int and takes an int
 *       argument
 *
 * Return: the int on success and -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int a;

	a = -1;
	if (array && cmp)
	{

		if (size <= 0)
		{
			return (a);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				a = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (a);
			}
		}

	}
	return (a);
}

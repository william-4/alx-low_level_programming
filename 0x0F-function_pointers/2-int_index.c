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

	if (size <= 0)
		return (-1);
	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp()array[i] > 0)
				return (i);
		}
	}
	return (-1);
}

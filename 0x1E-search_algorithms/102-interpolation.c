#include "search_algos.h"

/**
 * jump_search - searches for value in an array of
 * integers Jump search algorithm
 * @size: size of arra
 * @value: value to the search
 * @array: input array
 * Return: index of number
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, x, h;
	double f;

	if (array == NULL)
		return (-1);

	x = 0;
	h = size - 1;

	while (size)
	{
		f = (double)(h - x) / (array[h] - array[x]) * (value - array[x]);
		pos = (size_t)(x + f);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			x = pos + 1;
		else
			h = pos - 1;

		if (x == h)
			break;
	}

	return (-1);
}

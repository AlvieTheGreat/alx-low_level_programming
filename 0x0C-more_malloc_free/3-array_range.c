#include <stdlib.h>
#include "main.h"
/**
  * array_range - creates an array of integers.
  * @min: minimum value.
  * @max: maximum value.
  *
  * Description - array created should contain all values from min,
  * to max.
  * Return: pointer to newly created array, otherwise NULL on failure.
  */

int *array_range(int min, int max)
{
	int size;
	int *arr;
	int i;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}

	return (arr);
}


#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of  elements in an array
 * @size: size of each element in bytes
 * Return: a pointer, otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	return (NULL);

	byte_ptr = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		byte_ptr[i] = 0;
	}

	return (ptr);
}

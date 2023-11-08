#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to the newly allocated memory block or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	/* If new size is 0, it's equivalent to free(ptr) */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	/* If new size is the same as old size, no action needed */
	if (new_size == old_size)
	{
		return (ptr);
	}

	/* Allocate memory for the new block */
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	/* Copy old data to new block */
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
		}
	}
	else
	{
		for (i = 0; i < new_size; i++)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
		}
	}

	/* Free the original block */
	free(ptr);

	return (new_ptr);
}

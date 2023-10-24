#include "main.h"

/**
  * _memcpy - function that copies memory area.
  *
  * @dest: pointer to the destination memory area.
  * @src: pointer to the source memory area.
  * @n: number of bytes to be copied.
  *
  * Return: pointer(dest)
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]; /* copies byte from src to dest*/
	}
	return (dest); /* returns a pointer to the destination memory area*/
}


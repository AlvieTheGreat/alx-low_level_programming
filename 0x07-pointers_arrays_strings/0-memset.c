#include "main.h"

/**
  * _memset - fills memory with a constant byte.
  *
  * @s: pointer to a memory area.
  * @b: the constant byte
  * @n: number of bytes to be filled.
  *
  * Return: the pointer(s)
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b; /* fills the memory area with the constant byte*/
	}
	return (s); /* returns a pointer to the modified memory area*/
}

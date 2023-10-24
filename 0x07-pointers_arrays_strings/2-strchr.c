#include "main.h"
#include <stddef.h>

/**
  * _strchr - locates a character in a string.
  *
  * @s: pointer to the string
  * @c: the character
  *
  * Return: pointer(s) if character is found,
  * or NULL if no character is found.
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s); /* returns a pointer to the first occurrence of c*/
		}
		s++;
	}
	return (NULL); /* returns NULL if c is not found in string*/
}

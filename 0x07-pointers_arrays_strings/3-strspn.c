#include "main.h"

/**
  * _strspn - gets the length of a prefix substring.
  *
  * @s: pointer to array
  * @accept: pointer to array
  *
  * Return: the length of the prefix substring.
  */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				count++;
				break;
			}
		}
		if (s[b] == '\0')
			return (count);
	}
	return (count);
}

#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
	}

	return (0);
}


#include "main.h"

/**
  * _isalpha - checks for alphabetic character.
  *
  * @c: character for comparison.
  *
  * Return: 1 if its a lowercase/uppercase letter,
  * 0 if otherwise.
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

#include "main.h"

/**
  * _isupper - checks for uppercase letters.
  *
  * @c: character to check.
  *
  * Return: 1 if c is uppercase,
  * otherwise zero.
  */

int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}

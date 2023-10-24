#include "main.h"

/**
  * _isdigit - checks for a digit.
  *
  * @c: character to be checked.
  *
  * Return: 1 if c is a digit,
  * otherwise zero.
  */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

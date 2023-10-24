#include "main.h"

/**
  * _abs - computes the absolute value of an integer.
  *
  * @n: used as an argument
  *
  * Return: negative of n if its less than zero,
  * otherwise returns n(positive).
  */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}

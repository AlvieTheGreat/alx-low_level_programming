#include "main.h"

/**
  * _pow_recursion - returns the value of x raised to the power of y.
  *
  * @x: a number.
  * @y: the power
  *
  * Return: -1 if y is lower than 0,
  * otherwise return the value of x to the power of y.
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1); /* any number raised to power of 0 is 1*/
	}
	return (x * _pow_recursion(x, y - 1)); /* the recursive call*/
}

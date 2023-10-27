#include "main.h"

/**
  * factorial - returns the factorial of a number.
  * @n: the number.
  *
  * Return: -1 if n is lower than 0(error)
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* this indicates an error for negative numbers*/
	} else if (n == 0)
	{
		return (1); /* since factorial of 0 is 1*/
	}
	return (n * factorial(n - 1)); /* recursive call to calculate factorial */

}

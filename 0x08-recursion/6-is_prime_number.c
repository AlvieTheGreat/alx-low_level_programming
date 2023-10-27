#include "main.h"

/**
  * is_prime_helper - Recursive helper function to check if a number is prime.
  * @n: the number to check for primality.
  * @i: the divisor to check against.
  * Return: 1 if prime, 0 otherwise.
  */

int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	} else if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i - 1));
}

/**
  * is_prime_number - returns 1 if the input integer is a prime number.
  * Return: otherwise it returns 0.
  * @n: the input integer.
  */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, n / 2));

}

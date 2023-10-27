#include "main.h"

/**
  * sqrt_helper - Recursive helper function to find square root,
  * using binary search.
  * @n: the number to find the square root of.
  * @low: the lower bound of the search range.
  * @high: the upper bound of the search range.
  *
  * Return: -1 if n does not have a square root.
  */

int sqrt_helper(int n, int low, int high)
{
	int mid;
	int square;

	if (low > high)
	{
		return (-1);
	}

	mid = low + (high - low) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	} else if (square < n)
	{
		return (sqrt_helper(n, mid + 1, high));
	}
	return (sqrt_helper(n, low, mid - 1));

}
/**
  * _sqrt_recursion - returns the natural square root of a number.
  *
  * sqrt_helper - Recursive helper function to find square root,
  * using binary search.
  * @n: the number to find the square root of.
  * Return: -1 if n does not have a square root.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 1, n));
}

#include "main.h"

/**
  * print_last_digit - prints last digit of a number.
  *
  * @n: the number
  *
  * Return: value of last digit
  */

int print_last_digit(int n)
{
	int last_digit = n % 10; /* calculates last digit using the modulo operator*/

	_putchar(last_digit + '0'); /* prints the last digit*/
	return (last_digit); /* returns value of last digit*/
}

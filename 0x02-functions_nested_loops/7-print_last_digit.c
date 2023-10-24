#include "main.h"
#include "6-abs.c"

/**
  * print_last_digit - prints last digit of a number.
  *
  * @n: the number
  *
  * Return: value of last digit
  */

int print_last_digit(int n)
{

	_putchar('0' + _abs(n % 10)); /* prints the last digit*/
	return (_abs(n % 10)); /* returns value of last digit*/
}

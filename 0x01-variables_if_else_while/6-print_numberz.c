#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all numbers of base 10,
 * starting from 0,
 * printf function is not allowed.
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	putchar('\n');
	return (0);
}

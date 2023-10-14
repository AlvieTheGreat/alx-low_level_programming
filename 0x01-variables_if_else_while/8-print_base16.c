#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers of base 16
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	unsigned char a = '0';
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(a);
		a++;
	}
	a = '1';
	for (n = 0; n < 6; n++)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}

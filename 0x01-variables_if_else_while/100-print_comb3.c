#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two digits,
 * must be seperated by , followed by a space,
 * the two digits must be different,
 * print only the smallest combination of the two
 * should be in ascending order
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			putchar('0' + n);
			putchar('0' + m);
		if (n != 8 || m != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}

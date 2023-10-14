#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of three digits,
 * numbers must be seperated by , followed by a space,
 * the digits must be different,
 * prints only the smallest combination of the three,
 * should be printed in ascending order.
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

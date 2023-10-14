#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase alphabets in reverse
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	char a;

		for (a = 'z'; a >= 'a'; a--)
			putchar(a);
				putchar('\n');
				return (0);
}

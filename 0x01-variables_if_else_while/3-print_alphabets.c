#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase,
 * then in uppercase,
 * followed by a new line.
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
			for (a = 'A'; a <= 'Z'; a++)
				putchar(a);
			putchar('\n');
			return (0);
}

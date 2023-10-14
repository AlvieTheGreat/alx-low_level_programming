#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: prints the alphabet in lowercase,
  * prints all letters except q and e.
  *
  * Return: Always zero (Success)
  */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
	putchar(a);
	}
	putchar('\n');
	return (0);
}

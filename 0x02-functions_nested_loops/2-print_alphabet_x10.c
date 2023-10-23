#include "main.h"

/**
  * print_alphabet_x10 - prints alphabets 10 times.
  *
  * Return: always zero(success)
  */

void print_alphabet_x10(void)
{
	int i, j;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';

		for (j = 0; j < 26; j++)
		{
			_putchar(letter);
			letter++;
		}
	_putchar('\n');
	}
}

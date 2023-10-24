#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: always zero
  */

int main(void)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int c;
	int count;

	printf("%u, %u", a, b);

	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		printf(", %u", c);

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: zero always
  */

int main(void)
{
	int x;
	int y = 0;

	for (int x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			y += x;
		}
	}
	printf("%d\n", y);
	return (0);
}

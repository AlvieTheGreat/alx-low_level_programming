#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: zero always
  */

int main(void)
{
	int sum = 0;
	int y = 0;

	while (y < 1024)
	{
		if (y % 3 == 0 || y % 5 == 0)
		{
			sum += y;
		}
		y++;
	}
	printf("%d\n", sum);
	return (0);

}

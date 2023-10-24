#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: zero always
  */

int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int fib3;
	int sum = 2;

	while (fib1 + fib2 <= 4000000)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		if (fib3 % 2 == 0)
		{
			sum += fib3;
		}
	}
	printf("%d\n", sum);
	return (0);
}

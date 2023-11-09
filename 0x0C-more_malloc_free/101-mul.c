#include <stdio.h>
#include <stdlib.h>
/**
  * is_valid_number - checks if a string contains only digits.
  *
  * @str: a string
  * Return: one always otherwise error
  */
int is_valid_number(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		return (0);
		str++;
	}
	return (1);
}

/**
  * main - checks if the correct numer of arguments is provided
  * @argc: first number
  * @argv: a pointer to a number
  * Return: zero always
 */

int main(int argc, char *argv[])
{
	char *num1_str;
	char *num2_str;
	unsigned long num1;
	unsigned long num2;
	unsigned long result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1_str = argv[1];
	num2_str = argv[2];

	if (!is_valid_number(num1_str) || !is_valid_number(num2_str))
	{
		printf("Error\n");
		return (98);
	}
	num1 = strtoul(num1_str, NULL, 10);
	num2 = strtoul(num2_str, NULL, 10);
	result = num1 * num2;

	printf("%lu\n", result);

	return (0);
}

#include "main.h"

/**
  * check_palindrome - Recursive helper function to check if a string is palindrome.
  * @s: the string to check.
  * @start: the starting index.
  * @end: the ending index.
  *
  * Return: 1 if palindrom, otherwise 0.
  */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	} else if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}

/**
  * is_palindrome - checks if a string is a palindrome.
  * @s: The string to check.
  *
  * Return: 1 if palindrome, otherwise 0.
  */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, length - 1));
}

/**
  * _strlen - calculates the length of a string recursively.
  * @s: string to calculate the length of.
  *
  * Return: the length of the string.
  */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

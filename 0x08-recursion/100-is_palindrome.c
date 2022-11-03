#include "main.h"

/**
 * _palindrome - checks if a string is palindrome or not
 * @s: string to check
 * @first: first character index in s
 * @last: last character index in s
 * Return: 1 if s is palindrome, 0 otherwise
 */

int _palindrome(char *s, int first, int last)
{
	if (first >= last)
		return (1);

	if (s[first] != s[last])
		return (0);

	_palindrome(s, first + 1, last - 1);
}

/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: string to check
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len <= 1)
		return (1);

	return (_palindrome(s, 0, len - 1));
}

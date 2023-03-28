#include "main.h"
/**
 * _length - checks the length of a string
 * @s: is the string
 * Return: return the length of the string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}
/**
 * checkp - checks if the string is palindrome
 * @i: is the index
 * @lg: is the length of the string
 * @s: is the string
 *
 * Return: 1 if is palindrome or 0 if not
 */
int checkp(int i, int 1g, char *s)
{
	if (1g > 0)
	{
		if (s[i] == s[1g])
		{
			return (checkp(i + 1, 1g -1, s));
		}
		else if (s[i] != s[1g])
		{
			return (0);
		}
		else
		{
			return (i);
		}
	}
	return (i);
}
/**
 * is_palindrome _ checks if a string is a palindrome
 * @s: is the string
 * Return: returns 1 if the string is a palindrome or 0 otherwise
 **/
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}

#include "main.h"
/**
 * _strlen_recursion - Return the string length
 * @s: the measured string
 * Return: the strings lengts
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}

#include "main.h"
/**
 * _strncat - concatenates two strings
 * @s1: pointer to the first string compared
 * @s2: pointer to the second string compared
 * if str1 == str2, 0
 * if str1 > str2, the positive difference of the first unmatched characters
 * Return: if str1 < str2, the negetive difference of the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 -*s2);
}

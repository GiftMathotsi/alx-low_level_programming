#include <stdio.h>
/**
 * main - the beginning
 * Return: is 0
 */
int main(void)
{
	char n;

	int c;

	n = 'a';
	c = 0;
	while
		(c < 10)
		{
			putchar(c + '0');
			c++;
		}
	while
		(n <= 'f')
		{
			putchar(n);
			n++;
		}
	putchar('\n');
	return (0);
}

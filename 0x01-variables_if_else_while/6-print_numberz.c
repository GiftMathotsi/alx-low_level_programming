#include <stdio.h>
/**
 * main - the beginning
 * Return: is 0
 */
int main(void)
{
        int n;

        n = 0;
        while (n < 10)
        {
		if (n < 10)
                putchar(n + '0');
                n++;
        }
        putchar('\n');
                return (0);
}

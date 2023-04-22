#include <stdio.h>
/**
 *main - entry point
 *description: print uppercase and lowercase of the alphabets
 *Return: always zero
 */
int main(void)
{
	char x = 'a', y = 'A';

	while (x <= 'z')

	{
		putchar(x);
		x++;
	}

	while (y <= 'Z')

	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}

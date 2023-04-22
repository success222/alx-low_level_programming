#include <stdio.h>
/**
 *main - entry point
 *description: print alphabets in lowercase in reverse
 *Return: always 0
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}

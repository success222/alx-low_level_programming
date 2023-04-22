#include <stdio.h>
/**
 *main - entey point
 *description: print the ASCII values of base 9
 *Return: always 0
 */
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

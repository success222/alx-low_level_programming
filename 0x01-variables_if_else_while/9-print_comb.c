#include <stdio.h>
/**
 *main - entry point
 *description: print possible combinations of single digits
 *Return: always 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x == 57)
		{
			continue;
		}
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

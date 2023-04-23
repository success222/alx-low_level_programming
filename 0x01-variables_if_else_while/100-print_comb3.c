#include <stdio.h>
/**
 *main - entry point
 *Return: always 0
 */
int main(void)
{
	int x = 48, y = 48;

	while (x <= 57)
	{
		while (y <= 57)
		{
			if (!(x < y) || (x == y))
			{
				putchar(x);
				putchar(y);
				if (x == 56 && y == 57)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y = 48;
		x++;
	}
	return (0);
}

#include <stdio.h>
/**
 *main - entry point
 *description: rint all the alphabets in lowercase except for q and e
 *Return: always 0
 */
int main(void)
{
	char x = 'a';
	
	while (x <= 'z')

	{
		if (x == 'e' || x == 'q')

		{
			x++;
			continue;
		}

		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

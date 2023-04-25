#include "main.h"
/**
 *print_alphabet - prints alphabets
 *description: print the alphabets jn lowercase
 *Return: void
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

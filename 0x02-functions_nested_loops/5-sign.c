#include "main.h"
/**
 *print_sign - prints the sign of n
 *@n: value to be printed
 *Return: 1 if n is positive, 0 if n is zero and -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

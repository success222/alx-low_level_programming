#include "main.h"
/**
 * more _numbers - prints 10 times the number from 0 to 14
 * Return: output
 */

void more_numbers(void)
{
	int num, prod;

	num = 5;
	prod = 10 * num;

	while (num <= 14)
	{
		_putchar(prod);
		num++;
	}
}

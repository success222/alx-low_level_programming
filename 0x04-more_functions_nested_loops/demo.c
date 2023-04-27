#include <stdio.h>

int main()
{
	int num, prod;

	num = 5;
	prod = num * 10;

	while (num <= 14)
	{
		putchar(prod);
		num++;
	}
	return (0);
}

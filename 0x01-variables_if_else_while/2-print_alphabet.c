#include <stdio.h>
#include <string.h>
/**
 *main - entry point
 *Return: always 0
 */
int main(void)
{
	char x = 'a';
	while (x <= 'z')
{
		putchar(x);
		++x;
}
	return (0);
}

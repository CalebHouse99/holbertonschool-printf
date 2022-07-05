#include "main.h"
#include <stddef.h>

/**
 * _puts - prints a string and new line to stdout
 * @str: pointer to string
 * Return: number of chars printed
 */
int _puts(char *str)
{
	int i = 0, count = 0;

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		count = 6;
		return (count);
	}
	while (str[i])
	{
		_putchar(str[i]);
		count++;
		i++;
	}
	return (count);
}

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string and new line to stdout
 * @str: pointer to string
 * Return: number of chars printed
 */
int _puts(char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		count++;
		i++;
	}
	_putchar('\n');
	return (count);
}


/**
 * _printf - 
 * @format: 
 *
 * Return: 
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int c, i = 0;
	const char *str;
	char *s;
	va_list arg;

	va_start(arg, format);
	for (str = format; str[i] != '\0'; i++)
	{
		while (str[i] != '%')
		{
			_putchar(str[i]);
			count++;
			i++;
		}
		i++;
		switch (str[i])
		{
			case 'c': c = va_arg(arg, int);
				_putchar(c);
				count++;
				break;
			case 's': s = va_arg(arg, char*);
 				count += _puts(s);
				break;
		}
	}
	va_end(arg);
	return (count);
}

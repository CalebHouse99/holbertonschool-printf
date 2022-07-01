#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
#include <stdio.h>

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
	return (count);
}


/**
 * _printf - Our implementation of the printf function 
 * @format: string to be printed, plus specifiers
 *
 * Return: count of chars printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	char c;
	const char *str;
	va_list arg;

	va_start(arg, format);
	for (str = format; *str != '\0'; str++)
	{
		if (*str == '%')
		{
			str++;
			switch (*str)
			{
				case 'c': c = (char)va_arg(arg, int);
					_putchar(c);
					count++;
					break;
				case 's':
 					count += _puts(va_arg(arg, char*));
					break;
				case '%':
					putchar('%');
                              		break;
			}
		}
		else
			_putchar(*str);
	}
	va_end(arg);
	return (count);
}

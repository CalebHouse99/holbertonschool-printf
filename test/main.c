#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
/*    int len;
    unsigned int ui;
    void *addr;
*/
     _printf("Let's try to _printf a simple sentence.\n");
/*    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
*/
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
/*
    _printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    _printf("Len1:[%d]\n", len);
    _printf("Unknown:[%r]\n");
*/
/*
int len2;
len2 = printf("Let's try to printf a simple sentence.\n");
printf("Length:[%d, %i]\n", len2, len2);
printf("Negative:[%d]\n", -762534);
printf("Unsigned:[%u]\n", ui); 
printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Character:[%c]\n", 'H');
printf("String:[%s]\n", "I am a string !");
printf("Address:[%p]\n", addr);
len2 = printf("Percent:[%%]\n");
printf("Len:[%d]\n", len2);
printf("Len:[%d]\n", len2);
printf("Unknown:[%r]\n");
*/
    return (0);
}

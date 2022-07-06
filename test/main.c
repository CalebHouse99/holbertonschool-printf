#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;
/*    unsigned int ui; 
    void *addr; */
	char *str = "";

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	_printf("Null character:[%c]\n", NULL);	
	printf("Null character:[%c]\n", NULL);
	len = _printf("Null string:[%s]\n", NULL);
	len2 = printf("Null string:[%s]\n", NULL);
	len = _printf("Empty string:[%s]\n", str);
	len2 = printf("Empty string:[%s]\n", str);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2); 

    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
	printf("Strange chars:[%c, %c, %c]\n", 100, 200, '%');
	_printf("Strange chars:[%c, %c, %c]\n", 100, 200, '%');
	len = _printf("%");
	len2 = printf("%");
	printf("\n");
	printf("%d\n", len);
	printf("%d\n", len2);
	printf(NULL);
	_printf(NULL);
	printf("\n");
	printf("%d\n", len);
	printf("%d\n", len2);

/*    ui = (unsigned int)INT_MAX + 1024; 
     addr = (void *)0x7ffe637541f0;
    _printf("Unsigned:[%u]\n", ui);
     printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
     printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
     printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Address:[%p]\n", addr);
     printf("Address:[%p]\n", addr);
*/
	return (0);
}

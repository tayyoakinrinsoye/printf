#include "main.h"
/**
 * print_character - prints character
 * @arg: va_list parameter
 * Description: print character
 * Return: 1
 */
int print_character(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	_putchar(i);

	return (1);
}

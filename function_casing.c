#include "main.h"
/**
 * print_character - prints character
 * @arg: va_list parameter
 * Description: print character
 * Return: 1
 */
int print_char(va_list arg)
{
	int k;

	k = va_arg(arg, int);
	_putchar(k);

	return (1);
}
/**
 * print_sign - print sign
 * @arg: va_list parameter
 * @base: base 10, 8, 16, 2 etc..
 * Description: print numbers and signed
 * Return: num of characters
 */
int print_sign(va_list arg, int base)
{
	int i = 0, cont = 0;
	char *s;

	i = va_arg(arg, int);
	if (i < 0)
	{
		i = -(i);
		_putchar('-');
		cont += 1;
	}
	s = convert_to("0123456789ABCDEF", i, base);
	_puts(s);
	cont += _strlen(s);
	return (cont);
}
/**
 * print_unsign - print_unsign
 * @arg: va_list parameter
 * @base: base 10, 8, 16
 * Description: print numbers with no sign
 * Return: num of xters
 */
int print_unsign(va_list arg, int base)
{
	int cont = 0;
	unsigned int i;
	char *s;

	i = va_arg(arg, unsigned int);
	s = convert_to("0123456789ABCDEF", i, base);
	_puts(s);
	cont = _strlen(s);

	return (cont);

}
/**
 * print_string - print string
 * @arg: va_list params
 * Description: print str
 * Return: num of xters
 */
int print_string(va_list arg)
{
	char *str;
	int cont = 0;

	str = va_arg(arg, char *);
	if (!str)
	{
		str = "(null)";
		_puts(str);

		return (_strlen(str));
	}
	_puts(str);
	cont = _strlen(str);
	return (cont);
}
/**
 * print_base16_upper_lower - print_base16_upper_lower
 * @arg: va_list params
 *@representation: pointer param
 * Description: This function takes 0123456789ABCDEF or 0123456789abcdef
 * in representation param for print hexadec format
 * Return: num of characters
 */
int print_base16_upper_lower(va_list arg, char *representation)
{
	unsigned int i = 0, cont = 0;
	char *str;

	i = va_arg(arg, unsigned int);
	str = convert_to(representation, i, 16);
	_puts(str);
	cont = _strlen(str);
	return (cont);

}

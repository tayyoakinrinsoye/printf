#include "main.h"
/**
 * character_print - used to prints character
 * @arg: va_list attribute
 * Description: character_print
 * Return: 1
 */
int character_print(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	_putchar(i);

	return (1);
}
/**
 * sign_printing -used to  print sign
 * @arg: va_list attribute
 * @base: base 10, 8, 16, 2 and so on..
 * Description: prints all numbers and signed
 * Return: all numbers of the character7
 */
int sign_printing(va_list arg, int base)
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
	s = convertTo("0123456789ABCDEF", i, base);
	_puts(s);
	cont += _strlen(s);
	return (cont);
}
/**
 * unsignPrinting - print_unsign
 * @arg: va_listattribute
 * @base: base 10, 8, 16 and so on..
 * Description: print numbers without the signed characteristics
 * Return: num of characters
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
 * printingOfString - print string
 * @arg: va_list attributes
 * Description: this is a function that only prints strings
 * Return:the num of attributes
 */
int printingOfString(va_list arg)
{
	char *s;
	int cont = 0;

	s = va_arg(arg, char *);
	if (!s)
	{
		s = "(null)";
		_puts(s);

		return (_strlen(s));
	}
	_puts(s);
	cont = _strlen(s);
	return (cont);
}
/**
 * printingBase16UpperLower - print_base16_upper_lower
 * @arg: va_list attribute
 *@representation: pointer parameter or attributed parameter
 * Description: This function takes 0123456789ABCDEF or 0123456789abcdef
 * in representation parameter for print hexadecimal format
 * Return: num of characters
 */
int printingBase16UpperLower(va_list arg, char *representation)
{
	unsigned int i = 0, cont = 0;
	char *s;

	i = va_arg(arg, unsigned int);
	s = convert_to(representation, i, 16);
	_puts(s);
	cont = _strlen(s);
	return (cont);

}

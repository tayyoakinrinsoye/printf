#include "main.h"
#include <stdarg.h>
/**
 *function_manager - function manager
 *@c: character to seaerch
 *@arg: va_list type
 *Description: This function call other functions
 * when the character is found
 *Return: count of printed characters
 */
int function_manager(char c, va_list arg)
{
	int count = 0;

	count = _switch(c, arg);
	if (c == 'p')
		count = print_ptr(arg);
	return (count);
}
/**
 *_switch - switch
 *@c: character to find
 *@arg: va_list type
 *Description: This function evaluate cases
 *Return: count of printed characters
 */
int _switch(char c, va_list arg)
{
	int count = 0;

	switch (c)
	{
		case 'b':
			count += print_unsign(arg, 2);
			break;
	/*	case 'c':
			count += print_character(arg);
			break;*/
		case 'd':
		case 'i':
			count += print_sign(arg, 10);
			break;
		case 'o':
			count += print_unsign(arg, 8);
			break;
		case 'r':
			count += print_rev(arg);
			break;
		case 'R':
			count += print_rot13(arg);
			break;
		case 's':
			count += print_string(arg);
			break;
		case 'u':
			count += print_unsign(arg, 10);
			break;
		case 'x':
			count += print_base16_upper_lower(arg, "0123456789abcdef");
			break;
		case 'X':
			count += print_base16_upper_lower(arg, "0123456789ABCDEF");
			break;
		default:
			count = -1;
	}
	return (count);
}

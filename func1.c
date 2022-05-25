#include <stdlib.h>
#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@s: pointer char
 *Return: int length
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}
/**
 *_puts - print string
 *Description: print some string
 *@str: pointer char
 *Return: Nothing
 */
void _puts(char *str)
{
	int k;

	for (k = 0; k < _strlen(str); k++)
	{
		_putchar(str[k]);
	}
}
/**
 *convert_to - convert numbers
 *Description: This function convert numbers to other formats
 *decimal, octal, hexadecimal, binary etc..
 *@representation: char representation[] = "0123456789ABCDEF";
 *@num: num to tranasform
 *@base: base to transform num
 *Return: number into char pointer
 */
char *convert_to(char rep[], unsigned int number, int base)
{
	char *ptr;
	static char buffer[128];
	int mode = 0;

	ptr = &buffer[127];
	*ptr = '\0';

	do {
		mod = number % base;
		*--ptr = rep[mode];
		number /= base;
	} while (number != 0);
	return (ptr);
}

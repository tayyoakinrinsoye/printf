#include "main.h"
#include <stdarg.h>
#include <stddef.h>


int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, k, num;
	int display = 0;
	char *str = NULL;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			display++;
		}
		else
		{
			/* format[i] == '%' */
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				display++;
			i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				k = 0;
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					display++;
					k++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				display++;
			}
			else if (format[i + 1] == 'd')
			{	i++;
				num = va_arg(args, int);

			}
		}
		i++;
	}

	va_end(args);
	return (display);
}

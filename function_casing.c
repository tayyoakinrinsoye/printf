#include "main.h"

/**

 * print_character - prints ch

 * @arg: va_list parame

 * Description: print char

 * Return: one

 */

int print_character(va_list arg)
  
{
  
  int i;
  

  
  i = va_arg(arg, int);
  
  _putchar(i);
  

  
  return (1);
  
}

/**

 * print_sign - print s

 * @arg: va_list parame

 * @base: base 10, 8, 16, 2 e

 * Description: print numbers and sig

 * Return: num of charac

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

 * print_unsign - print_u

 * @arg: va_list parame

 * @base: base 10, 8, 16 e

 * Description: print numbers without si

 * Return: num of charac

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

 * print_string - print st

 * @arg: va_list parame

 * Description: print st

 * Return: num of charac

 */

int print_string(va_list arg)
  
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

 * print_base16_upper_lower - print_base16_upper_

 * @arg: va_list parame

 *@representation: pointer parame

 * Description: This function tar print hdecimal format

 * Return: num of characters

 */

int print_base16_upper_lower(va_list arg, char *representation)
  
{
  
  unsigned int i = 0, cont = 0;
  
  char *s;
  

  
  i = va_arg(arg, unsigned int);
  
  s = convert_to(representation, i, 16);
  
  _puts(s);
  
  cont = _strlen(s);
  
  return (cont);
  

  
}

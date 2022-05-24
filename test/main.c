#include "../main.h"
#include <stdio.h>
int main(void)
{
	int n = 0;
	/*
	n = _printf("My name is: %s\n", "John");
	printf("n: %d\n", n);
	n = printf("My name is: %s\n", "John");
	printf("n: %d\n", n);
	n = _printf("[Percent]%%\n");
	n = printf("[Percent]%%\n");
	_printf("my name is %s\n", "JOHN");

	printf("Hello World\n");
	printf("Hello %c  World\n", 'A');
	printf("Hello %s World\n", "Another");
	*/
	printf("number is %d\n", 340005);
	n =  printf("number is %d\n", 340005);
	_printf("%d\n",n);
	printf("number is %d\n", 1026);
	n = _printf("number is %i\n", 1026);
	_printf("%i\n", n);
	return (0);
}

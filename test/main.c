#include "../main.h"
#include <stdio.h>
int main(void)
{
	int n = 0;

	n = _printf("My name is: %s\n", "John");
	printf("n: %d\n", n);
	n = printf("My name is: %s\n", "John");
	printf("n: %d\n", n);
	n = _printf("[Percent]%%\n");
	n = printf("[Percent]%%\n");
	return (0);
}

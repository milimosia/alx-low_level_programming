#include <stdio.h>
#include <stdlib.h>
/**
 * main - printa all digits of base 10
 * Return: 0
 */
int main(void)
{
	char c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}

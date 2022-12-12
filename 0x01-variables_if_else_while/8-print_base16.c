#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 */
int main(void)
{
	char ch;
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

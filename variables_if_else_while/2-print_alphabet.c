/**
 * main -prints lowercase alphabet
 * Return: 0
 */

#include <stdio.h>

int main(void)
{

	char c;

	c = 97;
	while (c < 123)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

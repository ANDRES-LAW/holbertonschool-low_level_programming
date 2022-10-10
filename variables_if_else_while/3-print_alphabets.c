/**
 * main - Prints lowercase alphabet
 * followed by a new line
 * Retrnn: 0
 */

#include <stdio.h>

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

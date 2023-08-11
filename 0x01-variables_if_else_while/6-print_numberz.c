#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9 with ASCII 48 through 58.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

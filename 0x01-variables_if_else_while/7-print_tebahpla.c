#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha =< 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

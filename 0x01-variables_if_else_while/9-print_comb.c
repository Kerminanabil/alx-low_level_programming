#include <stdio.h>


/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	for (num = 0 ;num < 10; num++)
	{
		putchar (num);
		if (num != 9 && num != 0)
		{
			printf("%d", num + ", ");
		}
	}
	putchar('\n');
	return (0);
}
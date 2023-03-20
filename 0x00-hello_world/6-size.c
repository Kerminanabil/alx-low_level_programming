#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("char size: %d byte(s)\n",sizeof(char));
	printf("int size: %d byte(s)\n",sizeof(int));
	printf("float size: %d byte(s)\n",sizeof(float));
	printf("long long size: %d byte(s)\n",sizeof(long long));
	printf("long int: %d byte(s)\n",sizeof(long int));
    return (0);
}

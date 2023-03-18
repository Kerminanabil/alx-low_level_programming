#include <stdio.h>

int main(void)
{
	char alphabets[26*2] = "abcdefghigklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for(i=0;i<52;i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return(0);
}

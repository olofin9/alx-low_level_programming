#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Correct)
 */

int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

putchar('\n');
return (0);
}

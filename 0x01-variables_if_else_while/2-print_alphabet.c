#include <stdio.h>
#include <stdlib.h>
/**
*main - Program to print alphabet letter followed by new line
*
*Return: 0
*/
int main(void)
{
	int letter;
	
	for (letter = 'a'; letter <= 'z';)
	{
			putchar(letter);
			letter++;
	}
	putchar('\n');
	return (0);
}

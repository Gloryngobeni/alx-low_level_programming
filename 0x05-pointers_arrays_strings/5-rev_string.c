#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[o];
	int couter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}

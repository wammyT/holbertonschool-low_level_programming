#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: input to reverse
 * Return: strings and in reverse
 */
void rev_string(char *s)
{
	char erv = s[0];
	int fcounter = 0;
	int i;

	while (s[fcounter] != '\0')
		fcounter++;

	for (i = 0; i < fcounter; i++)
	{
		fcounter--;
		erv = s[i];
		s[i] = s[fcounter];
		s[fcounter] = erv;
	}
}

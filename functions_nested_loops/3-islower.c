#inlcude "main.h"
/**
 * _islower - checks if a character is lower case if yes return to 1.
 * otherwise return to 0  just like islower function is ctype.h
 * @c: Is the int value to be compared with the ASCII value
 * Return: 0 if Success
 */
int _islower(int c )
{
	if (c >= 97 && c <=122)
		return (1);
	else
		return (0);
}

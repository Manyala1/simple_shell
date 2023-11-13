#include "shell.h"

/**
 * _isalpha - checks for an alphabetic character
 * @i: charater to add
 *
 * Return: 1 if  i is alphabetic, 0 otherwise
 */
int _isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	else
		return (0);
}

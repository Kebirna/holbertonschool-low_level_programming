#include "holberton.h"

/**
 * *_strpbrk - Finds the first matching character from accept in s
 * @s: pointer to the string
 * @accept: the string to be matched
 *
 * Return: a pointer to the first matching char
 */

char *_strpbrk(char *s, char *accept)
{
	char *start;
	int x;
	int y;

	x = 0;
	y = 0;

	while (s[x] != '\0' && x != 9999)
	{
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				start = &(s[x]);
				return (start); /*is it correct, or *start?*/
				x = 9998;
				break;
			}
			y++;
		}
		x++;
		y = 0;
	}
	if (s[x] == '\0')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _strcmpdir - function that compares strings to find dir.
 * @str1: String parameter
 * @str2: String parameter
 *
 * Return: mach or any
 **/

int _strcmpdir(char *str1, char *str2)
{
	int i = 0;

	for (; (*str2 != '\0' && *str1 != '\0') && *str1 == *str2; str1++)
	{
		if (i == 3)
		{
			break;
		}
		i++;
		str2++;
	}

	return (*str1 - *str2);
}

/**
 * _charput - function writes the character like putchar
 * @c: parameter
 *
 * Return: for  success 1 or for  error -1.
 */

int _charput(char c)
{
	return (write(1, &c, 1));
}

/**
 * _place - function similar to puts in C.
 * @str: parameter
 *
 * Return: void
 */

void _place(char *str)
{
	while (*str != '\0')
	{
		_charput(*str);
		str++;
	}
}

/**
 * _strlen - function for the length of string.
 * @str: String parameter.
 * Return: return length of string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strconcat - function that concatane strings.
 * @str1: String parameter
 * @str2: String  parameter
 * Return: Concat strings.
 */
char *_strconcat(char *str1, char *str2)
{
	char *a;
	int lens1, lens2, j, i, e;

	if (str1 == NULL)
	{
		str1 = "";
	}

	if (str2 == NULL)
	{
		str2 = "";
	}

	lens1 = _strlen(str1);

	lens2 = _strlen(str2);

	a = malloc(((lens1) + (lens2) + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (j < lens1)
	{
		a[j] = s1[j];
		j++;
	}

	for (i = lens1, e = 0; e <= lens2; i++, e++)
	{
		a[i] = s2[e];
	}
	return (a);
}

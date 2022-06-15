#include "main.h"

/**
 * -find_slash - function identifies if first char is a slash.
 * @cmd: String parameter
 * Return: 1 if yes 0 if no.
 */

int _find_slash(char *cmd)
{
	int cont = 0;

	while (cmd[cont])
	{
		if (cmd[0] == '/')
		{
			printf("%c\n", cmd[0]);
			return (1);
		}

		cont++;
	}
	return (0);
}

/**
 * _compare_exit - function identifies if first char is a slash.
 * @str1: String parameter
 * @str2: String parameter
 * Return: return (*str1 -*str2)
 */

int _compare_exit(char *str1, char *str2)
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
 * _compare_env - function identifies if first char is a slash.
 * @str1: String parameter
 * @str2: String parameter
 * Return: return (*str1 -*str2)
 */

int compare_env(char *str1, char *str2)
{
	int i = 0;

	for (; (*str2 != '\0' && *str1 != '\0') && *str1 == *str2; str1++)
	{
		if (i == 2)
		{
			break;
		}
		i++;
		str2++;
	}

	return (*str1 - *str2);
}

/**
 * _locate_string - identyfy keyboard input.
 * @str_f: call prompt from another function (prompt)
 * Return: str
 **/

char **_locate_string(char *str_f)
{
	char **buf = malloc(1024 * sizeof(char *));
	char *split;
	int i = 0;
	char *delim = " \t\n";


	split = strtok(parameter, delim);

	while (split != NULL)
	{
		buf[i] = split;
		i++;
		split = strtok(NULL, delim);
	}
	_execute_proc(buf);
	return (buf);

}

/**
 *_ controlC - avoid close the shell
 * @sig: parameter
 **/
void _controlC(int sig)
{
	(void) sig;
	write(1, "\n$ ", 3);
}

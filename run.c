#include "main.h"

/**
 * _execute_proc - function that is similar to puts in C
 * @cmd: parameter to set to 402
 *
 * Return: void 
 */
void _execute_proc(char **cmd)
{

	char *parametro = (*(cmd + 1));
	char *s, *slash = "/";
	char *o;

	char *vartoprint = *cmd;
	char *argv[4];

	if ((access(cmd[0], F_OK) == 0))
	{
		argv[0] = cmd[0];
		argv[1] = parametro;
		argv[2] = ".";
		argv[3] = NULL;

		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error");
		}
	}
	else
	{
		o = _find_command(vartoprint);

		slash = _strconcat(o, slash);

		s = _strconcat(slash, *cmd);

		argv[0] = s;
		argv[1] = parametro;
		argv[2] = ".";
		argv[3] = NULL;

		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error");
		}
	}
}


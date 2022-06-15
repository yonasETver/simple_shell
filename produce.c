#include "main.h"

/**
 * _prompt - function can be call 
 * from another function (prompt)
 *
 **/
void _prompt(void)
{
	for (; ;)
	{
		char *text = NULL, **environ;
		pid_t child_pid;
		int status, lenbuf;
		size_t bufsize = 0;

		_place("$ ");
		lenbuf = getline(&text, &bufsize, stdin);
		if (lenbuf == -1)
		{
			exit(98);
		}
		if (_compare_exit(text, "exit") == 0)
		{
			exit(0);
		}
		if (_compare_env(text, "env") == 0)
		{
			while (*environ != NULL)
			{
				if (!(_strcmpdir(*environ, "USER")) ||
						!(_strcmpdir(*environ, "LANGUAGE")) ||
						!(_strcmpdir(*environ, "SESSION")) ||
						!(_strcmpdir(*environ, "COMPIZ_CONFIG_PROFILE")) ||
						!(_strcmpdir(*environ, "SHLV")) ||
						!(_strcmpdir(*environ, "HOME")) ||
						!(_strcmpdir(*environ, "C_IS")) ||
						!(_strcmpdir(*environ, "DESKTOP_SESSION")) ||
						!(_strcmpdir(*environ, "LOGNAME")) ||
						!(_strcmpdir(*environ, "TERM")) ||
						!(_strcmpdir(*environ, "PATH")))
				{
					_place(*environ), place("\n");
			       	}
				environ++;
		       	}
		}
		child_pid = fork();
		if (child_pid < 0)
		{
			perror("Error");
		}
		if (child_pid == 0)
		{
			_locate_string(text);
		}
		else
		{
			wait(&status);
		}
	}
}

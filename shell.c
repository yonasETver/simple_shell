#include "main.h"

/**
 * main - the main function.
 * @ac: parameter
 * @av: parameter
 * Return: return 0.
 **/
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, _controlC);
	_prompt();
	return (0);
}

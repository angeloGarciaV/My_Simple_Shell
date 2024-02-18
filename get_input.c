#include "main.h"
#include <unistd.h>
#include <sys/types.h>

/**
 * get_input - get input from user and displays prompt
 * @input: input from user
*/
void get_input(char *input)
{
	char cwd[MAX_INPUT_SIZE];
	char *username = getlogin();
	char hostname[MAX_INPUT_SIZE];

	gethostname(hostname, sizeof(hostname));
	getcwd(cwd, sizeof(cwd));

	printf("%s@%s:%s☀\n", username, hostname, cwd);
	fgets(input, MAX_INPUT_SIZE, stdin);
}

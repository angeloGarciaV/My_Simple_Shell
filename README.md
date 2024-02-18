# Holberton School - Simple Shell

Table of Contents

[Files](#files) |
[Compilation](#compilation) |
[Author](#author)

## Overview

This is a simple shell written in C.

### Files

[**main.c**](./main.c) - main function for simple shell. It prints a prompt and waits for user input. It parses the input and executes the command.

```C
int main(void)
/**
 * main - main function for simple shell.
 * It prints a prompt and waits for user input.
 * It parses the input and executes the command.
 * Return: 0 on success
*/
```

[**main.h**](./main.h) - Header file contains function prototypes and definitions.

```C
#define MAX_INPUT_SIZE 1024
#define MAX_TOKENS 100

void get_input(char *input);
void parse_input(char *input, char **tokens, int *tokenc);
void handle_sigint(int sig);
```

[**get_input.c**](./get_input.c) - Gets user input, current working, and host name. Displays the command line.

```C
void get_input(char *input);
    /*
    @input: input from user
    */
    ...
printf("%s@%s:%s☀\n", username, hostname, cwd);
```

[**parse_input.c**](./parse_input.c) - parse user input into tokens.

```C
void parse_input(char *input, char **tokens, int *token_count);

        /*
        @input: input from user
        @tokens: array of tokens
        @token_count: number of tokens
        */
```

[**signal.c**](./signal.c) - Exits the command line when `Ctrl+C` is pressed

```C
void handle_sigint(int sig)
    /**
     * handle_sigint - handles the SIGINT signal
     * @sig: signal number
    */
```

[**man_1_simple_shell.1**](./man_1_simple_shell.1) - Manual page to view in terminal.

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Author

Angelo Garcia 👉🏼 <angarciav@proton.me>

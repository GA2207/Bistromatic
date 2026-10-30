/*
** EPITECH PROJECT, 2026
** Bistromatic
** File description:
** Macros and prototypes of the bistromatic.
*/

#ifndef BISTROMATIC_H_
    #define BISTROMATIC_H_

    #include "my.h"

    #define SYNTAX_ERROR_MSG "syntax error"
    #define ERROR_MSG "error"

    #define OP_OPEN_PARENT 0
    #define OP_CLOSE_PARENT 1
    #define OP_PLUS 2
    #define OP_SUB 3
    #define OP_MULT 4
    #define OP_DIV 5
    #define OP_MOD 6

    #define NB_OP 7

int print_error(char const *msg);
void print_usage(void);
int char_in_str(char c, char const *str);
int check_args(int ac, char **av);

#endif

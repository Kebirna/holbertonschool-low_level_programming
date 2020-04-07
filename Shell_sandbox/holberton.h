#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct token_necklace
{
	const char *token;
	struct token_necklace *next;
}token_necklace;

token_necklace *tok_tok(char **string);
int print_tok(char *reservoir);	
int stat();
token_necklace *add_node_end(token_necklace **head, const char *str);

#endif

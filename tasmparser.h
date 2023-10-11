#ifndef PARSER_H
#define PARSER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "tasmlexer.h"

#include "hashmap.h"

typedef struct ParseList {
    Token value;
    struct ParseList *next;
} ParseList;

void append(ParseList *head, Token value);
void print_list(ParseList *head);
void generate_list(ParseList *root, Lexer *lexer, struct hashmap_s *hashmap);
ParseList parser(Lexer lexer);

#endif
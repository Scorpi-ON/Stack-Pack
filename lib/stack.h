#pragma(once)
#include <stdio.h>
#define STACK struct STACK

STACK
{
    int value;
    STACK *next;
};


STACK *create(void);
int fill(STACK **head);
void push(STACK **head, int value);
void clear(STACK *node);
void printToFile(STACK *node, FILE *output);

#ifndef LISTS_H_
#define LISTS_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_t - Creates nodes for a Singly linked list
 * @s: interger
 * @next: pointer
 */

typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif

#ifndef LIST_H
#define LIST_H

// Forward declarations for a linked list

typedef struct list *list_t;
typedef struct node *node_t;

// To Add a new list
list_t List();

// To Delete a list
void delete_list(list_t);

// Print List
void print_list(list_t);

// Append to list
void append(list_t, void *);

// TODO: Make insert and Find Functions

#endif


#include <stdio.h>
#include <stdlib.h>
#include "../inc/list.h"

struct node {
  int item;
  Node *next_node;
};

Node* create_list() {
  return NULL;
}

int is_empty(Node *first) {
  return (first == NULL);
}

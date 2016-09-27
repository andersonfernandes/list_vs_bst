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

Node* insert_node(Node *first, int item){
  Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->item = item;
    newNode->next = first;
    return newNode;
}

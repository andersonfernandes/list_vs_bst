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
  Node *new_node = (Node*) malloc(sizeof(Node));
  new_node->item = item;
  new_node->next_node = first;
  return new_node;
}

Node* remove_node(Node *first, int item){
  Node *previous = NULL;
  Node *current = first;

  while (current != NULL && current->item != item) {
    previous = current;
    current = current->next_node;
  }

  if (current == NULL) {
    return NULL;
  }

  if(previous == NULL) {
    first = current->next_node;
  } else {
    previous->next_node = current->next_node;
  }

  free(current);
  return first;
}

Node *search_node(Node *first, int item){
  Node *p;

  for (p = first; p != NULL ; p = p->next_node)
    if(p->item == item) return p;

  return NULL;
}

void print_list(Node *first){
  Node *p;

  for (p = first; p != NULL ; p = p->next_node) {
    printf("%d\n",p->item);
  }
}

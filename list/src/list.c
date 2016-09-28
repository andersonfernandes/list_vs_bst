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

Node* remove_node(Node *first, int item){
    Node *previous = NULL;
    Node *current = first;

    while (current != NULL && current->item != item) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        return NULL;
    }

    if(previous == NULL) {
        first = current->next;
    } else {
        previous->next = current->next;
    }

    free(current);
    return first;
}

//retorna a quantidade de iterações feitas para chegar a determinado elemento
int search_node(Node *first, int item){
  Node *p;
  int i = 0;
    for (p = first; p != NULL ; p = p->next) {
        ++i;
        if (p->item == item) {
            return i;
        }
    }
    return i;
}

void print_list(Node *first){
  Node *p;
    for (p = first; p != NULL ; p = p->next) {
        printf("%d\n",p->item);
    }
}

#ifndef LIST_H
#define LIST_H

  typedef struct node Node;

  Node* create_list();

  Node* insert_node(Node *first, int item);

  Node* remove_node(Node *first, int item);

  int is_empty(Node *first);

  Node* search_node(Node *first, int item);

  int compare_search(Node *first, int item);

  void print_list(Node *first);

#endif

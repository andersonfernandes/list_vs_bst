#ifndef BST_H
#define BST_H

  typedef struct binarytree BinaryTree;

  BinaryTree* create_bst_node(int item);

  BinaryTree* add_branches(BinaryTree* bt, int item);

  void free_bst(BinaryTree* bt);
  
  BinaryTree* search_bst(BinaryTree* bt, int item);
  
  BinaryTree* remove_bst_node(BinaryTree* bt, int item);

  void print_bst(BinaryTree* bt);

#endif
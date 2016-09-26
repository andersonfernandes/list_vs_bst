#ifndef BST_H
#define BST_H

  typedef struct binarytree BinaryTree;

  BinaryTree* create_binary_tree_node(int item);

  BinaryTree* add_branches(BinaryTree* bt, int item);

  void free_binary_tree(BinaryTree* bt);
  
  BinaryTree* search_binary_tree(BinaryTree* bt, int item);
  
  BinaryTree* remove_bst_node(BinaryTree* bt, int item);

  void print_bst(BinaryTree* bt)

#endif
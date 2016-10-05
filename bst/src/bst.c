#include <stdio.h>
#include <stdlib.h>
#include "../inc/bst.h"

//Contador global
int contador = 0;

struct binarytree{
	int item;
	BinaryTree* left;
	BinaryTree* right;
};

BinaryTree* create_empty_bst() {
  return NULL;
}

BinaryTree* create_bst_node(int item){
	BinaryTree* bt = (BinaryTree*) malloc(sizeof(BinaryTree));
	bt->item = item;
	bt->left = NULL;
	bt->right = NULL;

	return bt;
}

BinaryTree* add_branch(BinaryTree* bt, int item){
	if(bt == NULL) return create_bst_node(item);

	if(bt->item == item) return bt;

	else if(item < bt->item){
		if(bt->left == NULL)
			bt->left = create_bst_node(item);

		else
			bt->left = add_branch(bt->left, item);

	}
	else if(item >= bt->item){
		if(bt->right == NULL)
			bt->right = create_bst_node(item);

		else
			bt->right = add_branch(bt->right, item);

	}

	return bt;

}

void free_bst(BinaryTree* bt){
  	if(bt == NULL) return;

  	free_bst(bt->left);
  	free_bst(bt->right);

  	free(bt);
 	return;
}

BinaryTree* search_bst(BinaryTree* bt, int item){
	++contador;
	if(bt == NULL) return NULL;

 	if(bt->item == item) return bt;
  	else if(item < bt->item) search_bst(bt->left, item);
  	else if(item > bt->item) search_bst(bt->right, item);
}

int compare_search_bst(BinaryTree* bt, int item){
	
	contador = 0;
	search_bst(bt, item);
	return contador;

}

BinaryTree* remove_bst_node(BinaryTree* bt, int item){
	BinaryTree* first = search_bst(bt, item);
	BinaryTree* second;

	if(first != NULL){
		BinaryTree* last = first->left;

		if(last->right != NULL) {
      do {
        second = last;
        last = last->right;
      } while(last->right != NULL);
    }

		first->item = last->item;
		second->right = NULL;

    free(last);
	}
}

void print_bst(BinaryTree* bt){

	if(bt == NULL) return;

	printf("%d ", bt->item);

 	print_bst(bt->left);
 	print_bst(bt->right);

 	return;

}
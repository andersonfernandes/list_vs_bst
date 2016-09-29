OBJS_LIST = list/src/list.c
DEPS_LIST = list/inc/list.h
OBJS_BST = bst/src/bst.c
DEPS_BST = bst/inc/bst.h

LIST_TESTS_SUIT = list/tests/list_test.c

compile_all:
	gcc $(OBJS_LIST) $(DEPS_LIST) $(OBJS_BST) $(DEPS_BST) main.c -o main


compile_list_tests:
	gcc $(OBJS_LIST) $(DEPS_LIST) $(LIST_TESTS_SUIT) -o list_tests -lcunit

clean:
	rm -f main
	rm -f list_tests
	rm -f Rplots.pdf
	rm -f list_vs_bst.csv

plot_graph:
	Rscript list_vs_bst.R

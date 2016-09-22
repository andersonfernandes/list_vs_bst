OBJS_LIST = list/src/list.c
OBJ_MAIN_LIST = list/src/main.c
DEPS_LIST = list/inc/list.h

LIST_TESTS_SUIT = list/tests/list_test.c

# General Rules
compile_all:
	$(MAKE) compile_list

clean:
	rm -f main_list
	rm -f list_tests

# List Rules
compile_list:
	gcc $(OBJS_LIST) $(DEPS_LIST) $(OBJ_MAIN_LIST) -o main_list

compile_list_tests:
	gcc $(OBJS_LIST) $(DEPS_LIST) $(LIST_TESTS_SUIT) -o list_tests -lcunit


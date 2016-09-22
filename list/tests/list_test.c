#include "CUnit/Basic.h"
#include "../inc/list.h"

void create_list_test() {
  CU_ASSERT_EQUAL(create_list(), NULL);
}

void is_empty_test() {
  Node * list = create_list();

  /* When the list is empty */
  CU_ASSERT_TRUE(is_empty(list));

  /* TODO Add context to not empty list */
}

int main() {
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  CU_pSuite pSuite = NULL;

  pSuite = CU_add_suite("list_test_suite", 0, 0);

  if (pSuite == NULL) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if (CU_add_test(pSuite, "create_list_test", create_list_test) == NULL) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if (CU_add_test(pSuite, "is_empty_test", is_empty_test) == NULL) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return CU_get_error();
}

#include "../src/leetcode_002.c"
#include <assert.h>
#include <stdio.h>

#define sizeof_array(array) (sizeof(array) / sizeof(array[0]))

struct ListNode *create_list(int *array, int size) {
  struct ListNode *list = NULL;
  struct ListNode *current = NULL;
  struct ListNode *previous = NULL;

  for (int i = 0; i < size; i++) {
    current = malloc(sizeof(struct ListNode));
    current->val = array[i];
    current->next = NULL;
    if (list == NULL) {
      list = current;
    } else {
      previous->next = current;
    }
    previous = current;
  }
  return list;
}

void run_tests() {
  int array1[] = {2, 4, 3};
  struct ListNode *l1 = create_list(array1, sizeof_array(array1));
  int array2[] = {5, 6, 4};
  struct ListNode *l2 = create_list(array2, sizeof_array(array2));
  int array_result[] = {7, 0, 8};
  struct ListNode *result_expected =
      create_list(array_result, sizeof_array(array_result));

  struct ListNode *result = addTwoNumbers(l1, l2);

  for (int i = 0; i < sizeof_array(array_result); i++) {
    assert(result->val == result_expected->val);
    result = result->next;
    result_expected = result_expected->next;
  }

  int array3[] = {0};
  struct ListNode *l3 = create_list(array3, sizeof_array(array3));
  int array4[] = {0};
  struct ListNode *l4 = create_list(array4, sizeof_array(array4));
  int array_result2[] = {0};
  struct ListNode *result_expected2 =
      create_list(array_result2, sizeof_array(array_result2));

  struct ListNode *result2 = addTwoNumbers(l3, l4);
  for (int i = 0; i < sizeof_array(array_result2); i++) {
    assert(result2->val == result_expected2->val);
    result2 = result2->next;
    result_expected2 = result_expected2->next;
  }

  int array5[] = {9, 9, 9, 9, 9, 9, 9};
  struct ListNode *l5 = create_list(array5, sizeof_array(array5));
  int array6[] = {9, 9, 9, 9};
  struct ListNode *l6 = create_list(array6, sizeof_array(array6));
  int array_result3[] = {8, 9, 9, 9, 0, 0, 0, 1};
  struct ListNode *result_expected3 =
      create_list(array_result3, sizeof_array(array_result3));

  struct ListNode *result3 = addTwoNumbers(l5, l6);
  for (int i = 0; i < sizeof_array(array_result3); i++) {
    assert(result3->val == result_expected3->val);
    result3 = result3->next;
    result_expected3 = result_expected3->next;
  }

  printf("LEETCODE_002.C | All tests passed.\n");
}

int main() {
  run_tests();
  return 0;
}

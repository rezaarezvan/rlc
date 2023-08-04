#include "../src/leetcode_001.c"
#include <assert.h>
#include <stdio.h>

#define sizeof_array(array) (sizeof(array) / sizeof(array[0]))

void run_tests() {
  int RETURN[] = {0, 0};

  int case1[] = {2, 7, 11, 15};
  int size1 = sizeof_array(case1);
  int target1 = 9;

  int *result1 = twoSum(case1, size1, target1, RETURN);
  assert(result1[0] == 0);
  assert(result1[1] == 1);
  free(result1);

  int case2[] = {3, 2, 4};
  int size2 = sizeof_array(case2);
  int target2 = 6;

  int *result2 = twoSum(case2, size2, target2, RETURN);
  assert(result2[0] == 1);
  assert(result2[1] == 2);
  free(result2);

  int case3[] = {3, 3};
  int size3 = sizeof_array(case3);
  int target3 = 6;

  int *result3 = twoSum(case3, size3, target3, RETURN);
  assert(result3[0] == 0);
  assert(result3[1] == 1);
  free(result3);

  printf("LEETCODE_001.C | All tests passed.\n");
}

int main() {
  run_tests();
  return 0;
}

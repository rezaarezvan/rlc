#include "../src/leetcode_005.c"
#include <assert.h>
#include <stdio.h>

#define sizeof_array(array) (sizeof(array) / sizeof(array[0]))

void run_tests() {
  char *case1 = "babad";
  char *result1 = longestPalindrome(case1);
  assert(strcmp(result1, "bab") == 0);

  char *case2 = "cbbd";
  char *result2 = longestPalindrome(case2);
  assert(strcmp(result2, "bb") == 0);

  printf("LEETCODE_005.C | All tests passed.\n");
}

int main() {
  run_tests();
  return 0;
}

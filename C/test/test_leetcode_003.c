#include "../src/leetcode_003.c"
#include <assert.h>
#include <stdio.h>

#define sizeof_array(array) (sizeof(array) / sizeof(array[0]))

void run_tests() {
  char *s1 = "abcabcbb";
  int result1 = lengthOfLongestSubstring(s1);
  int expected1 = 3;

  assert(result1 == expected1);

  char *s2 = "bbbbb";
  int result2 = lengthOfLongestSubstring(s2);
  int expected2 = 1;

  assert(result2 == expected2);

  char *s3 = "pwwkew";
  int result3 = lengthOfLongestSubstring(s3);
  int expected3 = 3;
  assert(result3 == expected3);

  printf("LEETCODE_003.C | All tests passed.\n");
}

int main() {
  run_tests();
  return 0;
}

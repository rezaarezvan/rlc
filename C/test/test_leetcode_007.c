#include "../src/leetcode_007.c"
#include <assert.h>
#include <stdio.h>

#define sizeof_array(array) (sizeof(array) / sizeof(array[0]))

void run_tests() {
  assert(reverse(123) == 321);
  assert(reverse(-123) == -321);
  assert(reverse(120) == 21);

  printf("LEETCODE_007.C | All tests passed.\n");
}

int main() {
  run_tests();
  return 0;
}

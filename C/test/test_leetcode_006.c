#include "../src/leetcode_006.c"
#include <assert.h>
#include <stdio.h>

#define sizeof_array(array) (sizeof(array) / sizeof(array[0]))

void run_tests() {
  char *s = "PAYPALISHIRING";
  assert(strcmp(convert(s, 3), "PAHNAPLSIIGYIR") == 0);
  assert(strcmp(convert(s, 4), "PINALSIGYAHRPI") == 0);

  char *s2 = "A";
  assert(strcmp(convert(s2, 1), "A") == 0);

  printf("LEETCODE_006.C | All tests passed.\n");
}

int main() {
  run_tests();
  return 0;
}

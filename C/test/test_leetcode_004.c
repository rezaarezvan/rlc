#include "../src/leetcode_004.c"
#include <assert.h>
#include <stdio.h>

#define sizeof_array(array) (sizeof(array) / sizeof(array[0]))

void run_tests() {
  int nums1[] = {1, 3};
  int nums2[] = {2};
  double result = findMedianSortedArrays(nums1, sizeof_array(nums1), nums2,
                                         sizeof_array(nums2));

  assert(result == 2.0);

  int nums3[] = {1, 2};
  int nums4[] = {3, 4};
  double result2 = findMedianSortedArrays(nums3, sizeof_array(nums3), nums4,
                                          sizeof_array(nums4));

  assert(result2 == 2.5);

  printf("LEETCODE_004.C | All tests passed.\n");
}

int main() {
  run_tests();
  return 0;
}

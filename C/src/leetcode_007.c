#include <limits.h>

int reverse(int x) {
  int result = 0;
  int pop = 0;
  while (x) {
    pop = x % 10;
    x /= 10;

    if (result > INT_MAX / 10 || result < INT_MIN / 10) {
      return 0;
    }

    result = result * 10 + pop;
  }
  return result;
}

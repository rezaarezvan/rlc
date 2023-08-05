#include <string.h>

int lengthOfLongestSubstring(char *s) {
  int len = strlen(s);
  int max = 0;
  int l = 0;
  int r = 0;

  while (r < len) {
    for (int i = l; i < r; i++) {
      if (s[i] == s[r]) {
        l = i + 1;
        break;
      }
    }
    if (r - l + 1 > max) {
      max = r - l + 1;
    }
    r++;
  }

  return max;
}

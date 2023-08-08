#include <stdlib.h>
#include <string.h>

char *longestPalindrome(char *s) {
  int len = strlen(s);

  if (len == 0) {
    return "";
  }

  if (len == 1) {
    return s;
  }

  int max_len = 1;
  int max_start = 0;
  int max_end = 0;
  int i = 0;

  while (i < len) {
    int start = i;
    int end = i;
    while (end < len - 1 && s[end] == s[end + 1]) {
      end++;
    }
    i = end + 1;
    while (start > 0 && end < len - 1 && s[start - 1] == s[end + 1]) {
      start--;
      end++;
    }
    if (end - start + 1 > max_len) {
      max_len = end - start + 1;
      max_start = start;
      max_end = end;
    }
  }

  char *result = malloc(max_len + 1);
  memcpy(result, s + max_start, max_len);
  result[max_len] = '\0';
  return result;
}

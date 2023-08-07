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

  int i, j, k;
  int max_len = 0;
  int max_i = 0;
  int max_j = 0;
  int **dp = (int **)malloc(sizeof(int *) * len);
  for (i = 0; i < len; i++) {
    dp[i] = (int *)malloc(sizeof(int) * len);
    memset(dp[i], 0, sizeof(int) * len);
  }
  for (i = 0; i < len; i++) {
    dp[i][i] = 1;
    if (i < len - 1 && s[i] == s[i + 1]) {
      dp[i][i + 1] = 1;
      max_len = 2;
      max_i = i;
      max_j = i + 1;
    }
  }
  for (k = 3; k <= len; k++) {
    for (i = 0; i <= len - k; i++) {
      j = i + k - 1;
      if (s[i] == s[j] && dp[i + 1][j - 1] == 1) {
        dp[i][j] = 1;
        if (k > max_len) {
          max_len = k;
          max_i = i;
          max_j = j;
        }
      }
    }
  }
  char *ret = (char *)malloc(sizeof(char) * (max_len + 1));
  for (i = 0; i < max_len; i++) {
    ret[i] = s[max_i + i];
  }
  ret[max_len] = '\0';
  return ret;
}

#include <stdlib.h>
#include <string.h>

char *convert(char *s, int numRows) {
  int len = strlen(s);
  char *res = (char *)malloc(sizeof(char) * (len + 1));

  int i = 0;
  int j = 0;
  int k = 0;
  int step = 2 * numRows - 2;

  if (numRows == 1) {
    return s;
  }

  for (i = 0; i < numRows; i++) {
    for (j = i; j < len; j += step) {
      res[k++] = s[j];
      if (i != 0 && i != numRows - 1 && j + step - 2 * i < len) {
        res[k++] = s[j + step - 2 * i];
      }
    }
  }

  res[k] = '\0';
  return res;
}

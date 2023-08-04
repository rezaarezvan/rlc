#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
  struct ListNode *result = NULL;
  struct ListNode *current = NULL;
  struct ListNode *previous = NULL;
  int carry = 0;
  int sum = 0;

  while (l1 != NULL || l2 != NULL) {
    sum = carry;
    if (l1 != NULL) {
      sum += l1->val;
      l1 = l1->next;
    }
    if (l2 != NULL) {
      sum += l2->val;
      l2 = l2->next;
    }
    carry = sum / 10;
    current = malloc(sizeof(struct ListNode));
    current->val = sum % 10;
    current->next = NULL;
    if (result == NULL) {
      result = current;
    } else {
      previous->next = current;
    }
    previous = current;
  }
  if (carry > 0) {
    current = malloc(sizeof(struct ListNode));
    current->val = carry;
    current->next = NULL;
    previous->next = current;
  }
  return result;
}

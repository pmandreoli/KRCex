#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
  int c, len;
  int arr[10];

  for (size_t i = 0; i < 10; ++i) {
    arr[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (isspace(c)) {
      ++arr[0];
      if (len != 0) {
        if (len > 9) {
          len = 9;
        }
        ++arr[len];
      }
      len = 0;
      continue;
    }
    ++len;
  }

  size_t max = 0;
  for (size_t i = 1; i < 10; ++i) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  for (size_t i = max; i > 0; --i) {
    for (size_t j = 1; j < 10; ++j) {
      if (arr[j] >= i) {
        printf(" * ");
      } else {
        printf("   ");
      }
    }
    printf("\n");
  }

  for (size_t i = 1; i < 10; ++i) {
    printf(" %lu ", i);
  }
  printf("\n");

  return 0;
}

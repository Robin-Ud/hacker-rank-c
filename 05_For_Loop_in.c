#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int a, b;
  scanf("%d\n%d", &a, &b);
  // Complete the code.

  static const char *const words[] = {"",     "one", "two",   "three", "four",
                                      "five", "six", "seven", "eight", "nine"};
  for (int i = a; i <= b; i++) {
    if (i >= 1 && i <= 9) {
      printf("%s\n", words[i]);
    } else {
      printf("%s\n", (i % 2 == 0) ? "even" : "odd");
    }
  }

  return 0;
}

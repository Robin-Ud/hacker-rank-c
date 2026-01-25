#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int a, b;
  scanf("%d\n%d", &a, &b);
  // Complete the code.
  char *words[] = {"",     "one", "two",   "three", "four",
                   "five", "six", "seven", "eight", "nine"};
  int n = 0;
  int j = 0;
  for (int i = a; i <= b; i++) {
    n = a + j;
    if (n >= 1 && n <= 9) {
      printf("%s\n", words[n]);
    } else if (n % 2 == 0) {
      printf("even\n");
    } else {
      printf("odd\n");
    }
    j++;
  }
  return 0;
}

#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int numbers[4] = {a, b, c, d};
    int max_num = numbers[0];
    for(int i = 0; i < 4; i += 1) {
        if (max_num < numbers[i]) {
            max_num = numbers[i];
        }
    }
    return max_num;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}

#include <stdlib.h>
#include <stdio.h>

void update(int *pa, int *pb) {
    int temp1 = (*pa+*pb);
    int temp2 = abs(*pa-*pb);
    *pa = temp1;
    *pb = temp2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d \n %d", a, b);
    return 0;
}

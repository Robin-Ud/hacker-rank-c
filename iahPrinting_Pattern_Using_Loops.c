#include <stdio.h>

#define MIN(a,b) (((a) < (b)) ? (a) : (b))
int main() {
    int n;
    scanf("%d", &n);
    // meu codigo aqui
    int len = 2*n-1;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++) {
            int min = i;
            min = MIN(min, j);
            min = MIN(min, (len -1 -i));
            min = MIN(min, (len -1 -j));
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}

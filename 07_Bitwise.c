#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  //creating the variebles to recept the max values
    int MaxAnd = 0, MaxOr = 0, MaxXor = 0;

    //creating the loops to compare the results
    for(int i=1; i<=n; i++) {
        for(int j=i+1; j<=n; j++) {
            int buffer;

            buffer = i & j;
            if((buffer > MaxAnd)&&(buffer < k)){
                MaxAnd = buffer;
            }

            buffer = i | j ;
            if((buffer > MaxOr)&&(buffer < k)){
                MaxOr = buffer;
            }

            buffer = i ^ j ;
            if((buffer > MaxXor)&&(buffer < k)){
                MaxXor = buffer;
            }
        }

    }

    //entregando resultados
    printf("%d\n%d\n%d", MaxAnd, MaxOr, MaxXor);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

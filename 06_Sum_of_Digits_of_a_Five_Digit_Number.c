#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    // geting the five different numbers
    int a, b, c, d, e;
    a = n / 10000;
    b = (n /1000)%10;
    c = (n/100)%10;
    d = (n/10)%10;
    e = n%10;
    // and getting te sum
    int sum = a+b+c+d+e;
    // testing
    printf("%d", sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
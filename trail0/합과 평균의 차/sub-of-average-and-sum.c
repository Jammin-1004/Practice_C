#include <stdio.h>

int main() {
    
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    int sum = A + B + C;
    int avg = (A + B + C) / 3;
    printf("%d\n%d\n%d\n", sum, avg, sum - avg);

    return 0;
}
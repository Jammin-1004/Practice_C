#include <stdio.h>

int main() {
    
    int N;
    scanf("%d", &N);

    if (N < 0) {
        printf("%d\nminus", N);
        return 0;
    }    
    else {
        printf("%d", N);
        return 0;
    }
}
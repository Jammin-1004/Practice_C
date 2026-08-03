#include <stdio.h>
#include <stdbool.h>

int main() {

    int A, B;
    scanf("%d %d", &A, &B);

    if (A < B) {
        printf("%d ", 1);
    }
    else{
        printf("%d ", 0);
    }

    if (A == B) {
        printf("%d ", 1);
    }
    else{
        printf("%d ", 0);
    }
    
    return 0;
}
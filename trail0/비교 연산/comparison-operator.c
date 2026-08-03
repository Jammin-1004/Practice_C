#include <stdio.h>

int main() {
    
    int A, B;

    scanf("%d %d", &A, &B);

    int y = 1;
    int n = 0;

    if ( A >= B) {
        printf("%d\n", y);
    }
    else {
        printf("%d\n", n);
    }

    if ( A > B ) {
        printf("%d\n", y);
    }
    else {
        printf("%d\n", n);
    }

    if ( B >= A ) {
        printf("%d\n", y);
    }
    else {
        printf("%d\n", n);
    }

    if ( B > A ) {
        printf("%d\n", y);
    }
    else {
        printf("%d\n", n);
    }

    if ( A == B ) {
        printf("%d\n", y);
    }
    else {
        printf("%d\n", n);
    }

    if ( A != B ) {
        printf("%d\n", y);
    }
    else {
        printf("%d\n", n);
    }

    return 0;
}
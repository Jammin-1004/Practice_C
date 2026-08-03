#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    if ( n >= 3000 ){
        printf("book\n");
    }
    else if ( 1000 <= n && n <= 3000 ){
        printf("mask\n");
    }
    else {
        printf("no");
    }
    return 0;
}
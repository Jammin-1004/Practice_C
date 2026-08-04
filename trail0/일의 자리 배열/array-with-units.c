#include <stdio.h>

int main() {
    
    int a, b;
    scanf("%d %d", &a, &b);

    int c[9];
    c[0] = a;
    c[1] = b;

    printf("%d %d ", c[0], c[1]);
    for ( int i = 2 ; i < 10 ; i++)
    {   
        c[i] = c[i-2] + c[i-1];
        printf("%d ", c[i] % 10);
    }
    return 0;
}
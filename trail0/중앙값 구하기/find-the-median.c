#include <stdio.h>

int main() {
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ( a < c && b < a || a > c && b > a){
        printf("%d", a);
    }
    else if ( b < c && a < b || b > c && a > b)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}
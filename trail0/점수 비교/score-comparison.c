#include <stdio.h>

int main() {
    
    int AM, AE, BM, BE;
    scanf("%d %d", &AM, &AE);
    scanf("%d %d", &BM, &BE);

    if ( AE > BE && AM > BM ){
        printf("%d", 1);
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}
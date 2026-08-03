#include <stdio.h>

int main() {
    
    int A, B;
    scanf("%d %d", &A, &B);

    if ( A == B )
    {
        printf("%d", A);
    }
    else 
    {
        for( B ; B >= A ; B -= 1 )
        {
            printf("%d ", B);
        }
    }

    return 0;
}